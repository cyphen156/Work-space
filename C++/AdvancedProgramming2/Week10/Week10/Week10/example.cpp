#include <iostream>
#include <string>

using namespace std;

class Car {
	string model;
	int speed;

public:
	//������
	Car();
	Car(string model);
	Car(int speed);
	Car(string model, int speed);
	Car operator+ (Car op2);
	Car operator- (Car op2);
	Car operator+= (Car op2);
	Car operator-= (Car op2);
	void show();
};

Car::Car() :Car("�ҳ�Ÿ", 50) {};
Car::Car(string model) :Car(model, 50) {};
Car::Car(int speed):Car("�ҳ�Ÿ", speed) {};
Car::Car(string model, int speed) {
	this->model = model;
	this->speed = speed;
}

Car Car::operator+ (Car op2) {
	Car temp;
	temp.speed = this->speed + op2.speed;
	return temp;
}

Car Car::operator- (Car op2) {
	Car temp;
	temp.speed = this->speed - op2.speed;
	return temp;
}

Car Car::operator+= (Car op2) {
	this->speed += op2.speed;
	return *this;
}

Car Car::operator-= (Car op2) {
	this->speed -= op2.speed;
	return *this;
}

void Car::show() {
	cout << this->model << " speed = " << this->speed << endl;
}
int main() {

	/*Car urcar(1);
	urcar.show();
	Car mycar("���������");
	mycar.show();

	cout << "\n\n\n\n" << endl;
	*/
	Car myCar("�׷���", 100);
	myCar.show();
	Car yourCar("�ƹݶ�", 70);
	yourCar.show();

	cout << "myCar + yourCar ��� : ";
	(myCar + yourCar).show();

	cout << "myCar - yourCar ��� : ";
	(myCar - yourCar).show();

	cout << "myCar += yourCar ��� : ";
	(myCar += yourCar).show();

	cout << "myCar -= yourCar ��� : ";
	(myCar -= yourCar).show();
	return 0;
}