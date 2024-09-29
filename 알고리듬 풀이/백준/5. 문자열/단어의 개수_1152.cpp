/**
* 백준 문자열 1152 단어의 개수
* 공백을 포함한 문자열을 입력받아 몇개의 단어가 존재하는지 구한다.
* 한번에 한 단어씩 입력받아 개수를 세거나(C)
* 한번에 모두 입력 받아 문자열 파싱을 통해 처리하거나(C++)
* 
* 
* 제한사항
*****************************************
* 0 < Sentence <= 1,000,000             *
*****************************************
*
*
*
* 주의
* scanf는 '\0', '\t', '\n'입력 전까지 문자열을 입력 받는다.
* 첫 입력으로 공백이 오는경우를 처리해야 한다.
* 
* 풀이시간 10분
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int cnt = 0;
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); ++i)
    {
        if ((i == 0 || str[i-1] == ' ') && str[i] != ' ')
        {
            ++cnt;
        }
    }

    cout << cnt << '\n';
    return 0;
}