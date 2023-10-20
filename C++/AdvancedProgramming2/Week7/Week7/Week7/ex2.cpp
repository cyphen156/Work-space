#include <iostream>

using namespace std;

class Point {
	// default private
private:
	int x, y;

public:
	Point();

	// Circle() : Circle(1) {};
	// Point() : Point(1) {};
	Point(int x, int y);

	void show();
};

// default generator ���� ��������
Point::Point() : Point(0, 0) { }
Point::Point(int a, int b) {
	x = a;
	y = b;
}

void Point::show() {
	cout << x << y << endl;
}

class Rectangle {
	int x, y;

public:
	Rectangle();
	Rectangle(int a);
	Rectangle(int a, int b);

	// �����ڴ� ������ ���·� �׿�����
	// -> �Ҹ��Ҷ� LIFO�� ������ �Ҹ�
	~Rectangle();

	int isSquare();

	// new / delete Ű���带 ���� ��ü ���� ����
};

Rectangle::Rectangle(int a, int b) {
	x = a;
	y = b;
};
Rectangle::Rectangle(int a) : Rectangle(a, a) {};
Rectangle::Rectangle() : Rectangle(1, 1) {};

Rectangle::~Rectangle() {};

int Rectangle::isSquare() {
	if (x == y)
		return 1;
}
int main() {
	Point origin;

	Point target(10, 20);

	origin.show();
	target.show();

	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare() == 1)
		cout << "rect1�� ���簢���Դϴ�." << endl;
	if (rect2.isSquare() == 1)
		cout << "rect2�� ���簢���Դϴ�." << endl;
	if (rect3.isSquare() == 1)
		cout << "rect3�� ���簢���Դϴ�." << endl;

	
	return 0;
}