#include "Adder.h"
#include "Calculator.h"

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ��� >> ";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	adder.process();

}