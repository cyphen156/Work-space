#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>
#include <dirent.h>

#define PORT 9001

int main(void){
    int s_socket, c_socket;
    struct sockaddr_in s_addr, c_addr;
    int len, n;
    char rcvBuffer[BUFSIZ];
    char err[] = "Directory Error";
    DIR* dp;
    struct dirent * dir;
    s_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    memset(&s_addr, 0, sizeof(s_addr));
    s_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    s_addr.sin_family = AF_INET;
    s_addr.sin_port = htons(PORT);
    if(bind(s_socket, (struct sockaddr*)&s_addr, sizeof(s_addr)) == -1){
        printf("Cannot Bind\n");
        perror("Error Message");
        return -1;
    }
    if(listen(s_socket, 5) == -1){
        printf("Listen Fail!!!\n");
        perror("Error Message");
        return -1;
    }
    while(1){
        printf("List Server Started...\n");
        len = sizeof(c_addr);
        c_socket = accept(s_socket, (struct sockaddr*)&c_addr, &len);
        printf("Connected IP : %s\n", inet_ntoa(c_addr.sin_addr));
        if((n = read(c_socket, rcvBuffer, sizeof(rcvBuffer))) > 0){
            rcvBuffer[n] = '\0';
            printf("%s\n", rcvBuffer);
        }
        if(!strcmp(rcvBuffer, "ls")){
            if((dp = opendir(".")) == NULL){
                write(c_socket, err, strlen(err));
            }else{
                while((dir = readdir(dp)) != NULL){
                    if(dir->d_ino == 0)
                        continue;
                    write(c_socket, dir->d_name, strlen(dir->d_name));
                    write(c_socket, " ", 1);
                }
                closedir(dp);
            }
        }
        close(c_socket);
    }
    close(s_socket);
    return 0;
}