/**
*
* ���� �Լ��� ���
* 
* Base / Derived/ virtual
* 
* if Derived���� �θ�� ���� �̸��� �Լ��� ������ 
* �޼��带 ���̽� �ڵ� �Լ��� �ƴ� ��ü�� ������ ���� ȣ�� , 
* �������̵� == �ڽ�Ŭ������ �θ� Ŭ������ �����Լ��� 
* defalut :: Derived, ��ĳ���� ���� Baseȣ�� 
* ���� �̸�, ���� �������� ������, ���� ���ε�
* 
* ==> virtual �Լ��� �޼��� �������̵��� ���� �������� �����Ѵ�.
* ==>>>> �׷����� �� �޼��带 ����� ���� ������ų �ʿ䰡 �ִ�..
* 
* 
* ���� ���ε�
* 
*/

//#include <iostream>
//#include <string>
//
//using	namespace std;
//
//class Base {
//public:
//	void f() {
//		cout << "Base :: f() is called" << endl;
//	}
//};
//
//class Extends : public Base{
//public:
//	void f() {
//		cout << "Extends :: f() is called" << endl;
//	}
//};
//
//class : virtual Base{
//public:
//	void f() {
//		cout << "Base :: f() is called" << endl;
//	}
//};
//
//class Extends : public Base {
//public:
//	void f() {
//		cout << "Extends :: f() is called" << endl;
//	}
//};
//
//class shape {
//
//public:
//	virtual void draw(){ };
//};
//
//class Circle : public shape {
//public:
//	virtual void draw() {  
//		cout << "circle :: Draw() is called" << endl;
//
//	};
//
//};
//
//class Rect : public shape {
//public:
//	virtual void draw() {
//		cout << "circle :: Draw() is called" << endl;
//
//	};
//
//};
//
//class Line : public shape {
//
//
//public:
//	virtual void draw() {
//		cout << "Line :: Draw() is called" << endl;
//
//	}
//};
//
//
//int main() {
//	Circle c;
//	Rect r;
//	
//	shape* ps;
//	
//	ps = &c;
//	ps->draw();
//
//	ps = &r;
//	ps->draw();
//	
//	Shape* ps2[4];
//
//	return 0;
//}