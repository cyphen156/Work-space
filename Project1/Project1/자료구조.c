///**
//* ť �ڷᱸ�� �����ϱ�
//* // ���Ͽ��Ḯ��Ʈ
//* using struct
//* 
//*/
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//
//typedef struct Node {
//	struct Node* next;
//	char* data;
//} Node;
//
//typedef struct Queue {
//	Node* front;	//���
//	Node* rear;		//����
//} Queue;
//
//void menu(int n);
//bool isEmpty();
//int enQueue();
//int deQueue();
//int search();
//void printQueue();
//void freeQueue();
//
//Queue queue;
//
//int main() {	
//	queue.front = NULL;
//	queue.rear = NULL;
//	while (1)
//	{
//		int input;
//		printf("1 : enQueue, 2 : deQueue, 3 : search data, 4 : print Queue, 0 : ���α׷� ����\n");
//		scanf("%d", &input);
//		menu(input);
//	}
//
//	return 0;
//}
//
//// ��ɾ� �Է±�
//void menu(int n) {
//	getchar();
//	if (n == 0)
//	{
//		freeQueue();
//		printf("���α׷��� �����մϴ�.\n");
//		exit(0);
//	}
//	else if (n == 1)
//	{
//		enQueue();
//	}
//	else if (n == 2)
//	{
//		deQueue();
//	}
//	else if (n == 3)
//	{
//		search();
//	}
//	else if (n == 4)
//	{
//		printQueue();
//	}
//	else
//	{
//		printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n");
//	}
//}
//
//bool isEmpty()
//{
//	if(queue.front == NULL)
//	{
//		printf("������ ����ֽ��ϴ�.\n");
//		return true;	// return 1;
//	}
//	return false;		// return 0
//}
//
//int enQueue()
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	char src[256];
//	printf("������ �ܾ �Է����ּ���. �ܾ��� ���̴� �ִ� 255�Դϴ�.\n");
//	fgets(src, 256, stdin);
//	src[strcspn(src, "\n")] = 0;
//	newNode->data = _strdup(src);
//	newNode->next = NULL;
//
//	if (queue.front == NULL)
//	{
//		printf("ù��° �����͸� �Է��մϴ�.\n");
//		queue.front = queue.rear = newNode;
//	}
//	else
//	{
//		queue.rear->next = newNode;
//		queue.rear = newNode;
//	}
//	return 0;
//}
//
//int deQueue()
//{
//	if (isEmpty())
//	{
//		printf("�ܾ �������ּ���.\n");
//		return 0;
//	}
//	Node* temp = queue.front;		//ù��° ��� �̾Ƴ���
//	queue.front = queue.front->next; // ���� ��� ��������
//	if (queue.front == NULL) // ť�� ��� ��������� �ǹ��Ѵ�.
//	{
//		queue.rear == NULL; 
//	}
//	printf("���ŵ� �ܾ� : %s\n", temp->data);
//	free(temp->data);
//	free(temp);
//	return 1;
//}
//
//int search()
//{
//	if (isEmpty())
//	{
//		printf("�ܾ �������ּ���.\n");
//		return;
//	}
//	char src[256];
//	printf("ã����� �ܾ �Է����ּ���. �ܾ��� ���̴� �ִ� 255�Դϴ�.\n");
//	fgets(src, 256, stdin);
//	src[strcspn(src, "\n")] = 0;
//	Node* temp = queue.front;
//	int i = 0;
//	while (temp != NULL)
//	{
//		++i;
//		if (strcmp(src, temp->data) == 0)
//		{
//			printf("%s�� ��ġ�� %d�Դϴ�.\n", src, i);
//			return 1;
//		}
//		temp = temp->next;
//	}
//	printf("ã���ô� �ܾ�� ���ÿ� �����ϴ�.\n");
//	return 1;
//}
//
//void printQueue()
//{
//	if (isEmpty())
//	{
//		printf("�ܾ �������ּ���.\n");
//		return;
//	}
//	Node* temp = queue.front;
//	int i = 0;
//	while (temp != NULL)
//	{
//		++i;
//		printf("ť�� ��ġ : %d, ����� �ܾ� : %s\n", i, temp->data);
//		temp = temp->next;
//	}
//}
//
//void freeQueue()
//{
//	while (!isEmpty())
//	{
//		deQueue();
//	}
//}
