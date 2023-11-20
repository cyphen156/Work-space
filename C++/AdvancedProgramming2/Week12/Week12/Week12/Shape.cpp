#include "Shape.h"
#include <iostream>

using namespace std;

/*
* ���� ���� �Լ��� �����ϱ�
void Shape::draw() = 0;
*/

void Shape::draw() {
	cout << "Shape::Draw() called" << endl;
}
Shape::~Shape() {
	cout << "~Shape called" << endl;
}
void Shape::paint() {
	draw();
}

Shape* Shape::add(Shape* p) {
	this->next = p;
	return next;
}

Shape* Shape::getNext() {
	return next;
}