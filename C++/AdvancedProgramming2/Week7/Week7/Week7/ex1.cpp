//#include <iostream>
//
//using namespace std;
//
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
//	Circle() : Circle(1) {};
//
//	Circle(double f) {
//		radious = f;
//		cout << "Circle() �����ε� ������" << endl;
//	}
//
//	// ���� ������
//	Circle() : Circle(1) {
//		radious = 1;
//	}
//};
//
//double Circle::getArea() {
//	double result = 0.f;
//	result = 3.14 * radious * radious;
//
//	return result;
//};
//
//int main() {
//	int a, b;
//
//	Circle newCircle;
//	cin >> a >> b;
//	newCircle.radious = a;
//
//	cout << newCircle.getArea();
//	
//	Circle pizza(30);
//	return 0;
//}