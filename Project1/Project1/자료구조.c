///**
//* �����ڷᱸ�� �����ϱ�
//* //����Ʈ
//* using struct
//* 
//*/
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Node{
//	struct Node* next;
//	char* data;
//} Node;
//
////�ʱ� ������ ����
//int stackSize = 0;
//Node* top = NULL;
//
//void menu(int n);
//int isEmpty();
//int push();
//void pop();
//void search();
//void printStack();
//void freeStack();
//
//int main() {
//
//	while (1)
//	{
//		int input;
//		printf("1 : stack push , 2 : stack pop, 3 : search data, 4 : print stack, 0 : ���α׷� ����\n");
//		scanf("%d", &input);
//		menu(input);
//	}
//	return 0;
//}
//
//// ��ɾ� �Է±�
//void menu(int n) {
//	if (n == 0)
//	{
//		freeStack();
//		printf("���α׷��� �����մϴ�.\n");
//		exit(0);
//	}
//	else if (n == 1)
//	{
//		push();
//	}
//	else if (n == 2)
//	{
//		pop();
//	}
//	else if (n == 3)
//	{
//		search();
//	}
//	else if (n == 4)
//	{
//		printStack();
//	}
//	else
//	{
//		printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n");
//	}
//}
//
//int isEmpty()
//{
//	//������ ����ٸ� true
//	if (stackSize == 0)
//	{
//		printf("������ ����ֽ��ϴ�.\n");
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int push()
//{
//	printf("������ �ܾ �Է����ּ���. �ܾ��� ���̴� �ִ� 255�Դϴ�.\n");
//	char inputData[256] ;
//	scanf("%255s", inputData);
//	getchar();
//
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (newNode == NULL) {
//		printf("push����!! �ٽ� �õ����ּ���.\n");
//		return -1;
//	}
//	newNode->data = _strdup(inputData);
//	newNode->next = top;
//	top = newNode;
//	++stackSize;
//	return 0;
//}
//
//void pop()
//{
//	if (isEmpty())
//	{
//		printf("�ܾ �������ּ���.\n");
//		return;
//	}
//	Node* temp = top;
//	top = top->next;
//	printf("���ŵ� �ܾ� : %s\n", temp->data);
//	free(temp->data);
//	free(temp);
//	stackSize--;
//}
//
//void search()
//{
//	if (isEmpty())
//	{
//		printf("�ܾ �������ּ���.\n");
//		return;
//	}
//	printf("ã��  ���� �ܾ �Է��ϼ���.\n");
//	char inputData[256];
//	scanf("%255s", inputData);
//	getchar();
//
//	Node* temp = top;
//	int isFounded = 0;
//	for (int i = stackSize; i > 0; --i) 
//	{
//		if (strcmp(inputData, temp->data) == 0)
//		{
//			isFounded = 1;
//			printf("%s�� ��ġ�� %d�Դϴ�.\n", inputData, i);
//			break;
//		}
//		temp = temp->next;
//	}
//	if (!isFounded)
//	{
//		printf("%s��/�� ���ÿ� �����ϴ�.\n", inputData);
//	}
//}
//
//void printStack()
//{
//	if (isEmpty())
//	{
//		printf("�ܾ �������ּ���.\n");
//		return;
//	}
//	Node* temp = top;
//	for (int i = stackSize; i > 0; --i)
//	{
//		printf("������ ��ġ : %d, ����� �ܾ� : %s\n", i, temp->data);
//		temp = temp->next;
//	}
//}
//
//void freeStack() {
//	while (top != NULL) {
//		pop();
//	}
//}