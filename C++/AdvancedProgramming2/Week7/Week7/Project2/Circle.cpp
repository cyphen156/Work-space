#include "car.h"
#include <iostream>
//class Circle {
//public: 
//	int radious;
//	double getArea();
//	
//	// ������
//	Circle() {
//		radious = 1;
//		cout << "Circle() �⺻ ������\n" 
//			<< "������  = " << radious << endl;
//	}
//	// => 
//	//Circle() : Circle(1) {};
//
//	Circle(double f) {
//		radious = f;
//		cout << "Circle() �����ε� ������" << endl;
//	}
//
//	~Circle() {
//		cout << this <<  "�Ҹ� " << radious << endl;
//	};
//};
//
//double Circle::getArea() {
//	double result = 0.f;
//	result = 3.14 * radious * radious;
//
//	return result;
//};
//
//void f() {
//	Circle fDonut;
//	Circle fPizza(9999);
//}
//
//Circle GDONUT;
//Circle GPIZZA(1000);

int main() {
	
	/*Circle mainDonut;
	Circle mainPizza(30);

	f();*/

	Car myCar;
	Car yourCar("BMW", "Blcak");

	std::cout << "myCar : ";
	myCar.printInfo();
	std::cout << "yourCar : ";
	yourCar.printInfo();
	return 0;
}