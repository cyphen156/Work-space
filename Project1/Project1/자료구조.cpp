/**
*
* ť �ڷᱸ�� �����ϱ�
* // ���Ͽ��Ḯ��Ʈ
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

class Queue {
private:
	Node* front;
	Node* rear;

public:
	// ������
	Queue() : front(nullptr), rear(nullptr){}

	// �Ҹ���
	~Queue() {
		freeQueue();
	}
	bool isEmpty();
	int enQueue();
	int deQueue();
	void search();
	void printQueue();
	void freeQueue();
};

void menu(int n, Queue& queue)
{

	switch(n)
	{
	case 0:
		queue.freeQueue();
		cout << "���α׷��� �����մϴ�." << endl;
		exit(0);
	case 1:
		queue.enQueue();
		break;
	case 2:
		queue.deQueue();
		break;
	case 3:
		queue.search();
		break;
	case 4:
		queue.printQueue();
		break;
	default:
		cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���" << endl;
	}
}

bool Queue::isEmpty()
{
	if (this->front == nullptr)
	{
		cout << "������ ������ϴ�." << endl;
		return true;
	}
	return false;
}

int Queue::enQueue()
{
	cout << "������ ������ �Է����ּ���.\n";
	string data;
	getline(cin, data);
	Node* newNode = new Node(data);
	if (this->front == nullptr)
	{
		printf("ù��° �����͸� �Է��մϴ�.\n");
		front = rear = newNode;
	}
	else
	{
		rear->next = newNode;	// �� ���� ���� ��ձ�
		rear = newNode;			// ���� �濡 �Ҵ��ϱ�
	}
	return 1;
}

int Queue::deQueue()
{
	if (isEmpty())
	{
		printf("�ܾ �������ּ���.\n");
		return 0;
	}
	Node* temp = this->front;
	this->front = this->front->next;
	if (front == nullptr)
	{
		rear = nullptr;
	}
	cout << "���ŵ� ���� : " << temp->data << endl;	
	delete temp;
	return 1;
}

void Queue::search()
{
	if (isEmpty())
	{
		printf("�ܾ �������ּ���.\n");
		return;
	}
	cout << "ã����� ������ �Է����ּ���.\n";
	string str;
	getline(cin, str);
	Node* temp = front;
	int i = 1;
	while (temp != nullptr)
	{
		if (temp->data == str)
		{
			cout << str << "�� ��ġ�� " << i << "�Դϴ�." << endl;
			return;
		}
		++i;
		temp = temp->next;
	}
	cout << "ã���ô� ������ ť�� �����ϴ�.\n";

}

void Queue::printQueue()
{
	if (isEmpty())
	{
		printf("�ܾ �������ּ���.\n");
		return;
	}
	int i = 1;
	Node* temp = front;
	while (temp != nullptr)
	{
		
		cout << temp->data << "�� ��ġ�� " << i << "�Դϴ�." << endl;		
		++i;
		temp = temp->next;
	}
}

void Queue::freeQueue()
{
	while (!isEmpty())
	{
		deQueue();
	}
}


int main()
{
	Queue queue;
	while (1)
	{
		int input;
		cout << "1 : enQueue, 2 : deQueue, 3 : search data, 4 : print Queue, 0 : ���α׷� ����" << endl;
		cin >> input;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		menu(input, queue);
	}
	return 0;
}

*/