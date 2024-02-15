/**
*
* �����ڷᱸ�� �����ϱ�
* //����Ʈ
* 
* using class
*/
/*
#include <iostream>
#include <string>

using namespace std;

class Node {
public:
	string data;
	Node* next;
	
	Node(string data) : data(data), next(nullptr) {}
};

class Stack {
private:
	Node* top;
	int stackSize;

public:
	// ������
	Stack() : top(nullptr), stackSize(0){}

	// �Ҹ���
	~Stack() {
		freeStack();
	}
	bool isEmpty();
	int push();
	void pop();
	void search();
	void printStack();
	void freeStack();
};

void menu(int n, Stack& stack)
{

	switch(n)
	{
	case 0:
		stack.freeStack();
		cout << "���α׷��� �����մϴ�." << endl;
		exit(0);
	case 1:
		stack.push();
		break;
	case 2:
		stack.pop();
		break;
	case 3:
		stack.search();
		break;
	case 4:
		stack.printStack();
		break;
	default:
		cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���" << endl;
	}
}

bool Stack::isEmpty()
{
	if (this->top == nullptr)
	{
		cout << "������ ����ֽ��ϴ�. ������ �������ּ���." << endl;
		return true;
	}
	else
		return false;
}

int Stack::push()
{
	cout << "������ ������ �Է����ּ���." << endl;
	string src;
	getline(cin, src);
	Node* newNode = new Node(src);
	newNode->next = top;
	top = newNode;
	stackSize++;
	return 0;
}

void Stack::pop()
{
	if (isEmpty())
	{
		return;
	}
	Node* temp = top;
	cout << "���ŵ� ����: " << temp->data << endl;
	top = temp->next;
	delete temp;
	stackSize--;
}

void Stack::search()
{
	if (isEmpty())
	{
		return;
	}
	cout << "ã�� ���� ������ �Է��ϼ���: \n";
	string src;
	getline(cin, src);
	int i;
	Node* temp = top;
	for (i = stackSize; i > 0; --i)
	{
		if (temp->data == src)
		{
			cout << src << "�� ������" << i << "��°�� �ֽ��ϴ�." << endl;
			break;
		}
		temp = temp->next;
	}
	cout << src << "�� ���ÿ� �����ϴ�." << endl;

}

void Stack::printStack()
{
	if (isEmpty())
	{
		return;
	}

	int i;
	Node* temp = top;
	for (i = stackSize; i > 0; --i)
	{
		cout << "������ ��ġ : " << i << 
			", ����� �ܾ� : " << temp->data << endl;
		temp = temp->next;
	}
}

void Stack::freeStack()
{
	while (this->top != nullptr)
	{
		pop();
	}
}


int main()
{
	Stack stack;
	while (1)
	{
		int input;
		cout << "1 : stack push , 2 : stack pop, 3 : search data, 4 : print stack, 0 : ���α׷� ����" << endl;
		cin >> input;
		getchar();
		menu(input, stack);
	}
	return 0;
}
*/