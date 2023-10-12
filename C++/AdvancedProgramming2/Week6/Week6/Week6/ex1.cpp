#include <iostream>
using namespace std;

class Car
{
public:
	string model;
	string color;
	int fuel;
	int cSpeed;
	int maxSpeed;

	void addSpeed()
	{
		cSpeed += 50;
		fuelDown();
	}
	void speedDown()
	{
		cSpeed -= 50;
		fuelDown();
	}
	void addFuel() 
	{
		fuel += 10;
	}
	void fuelDown()
	{
		fuel -= 2;
	}
	void displaySpeed()
	{
		cout << "���� �ӵ� = " << cSpeed << "km/h(���ᷮ: " << fuel << "����)" << endl;
	}
};

int main()
{
	Car car;
	car.model = "�׷���";
	car.color = "white";
	car.fuel = 10;
	car.cSpeed = 0;
	car.maxSpeed = 250;

	int menu;
	cout << car.model + " �ý� �غ� �Ϸ�!" << endl;
	while (1)
	{
		cout << "�޴� : 1.���� 2.���� 3.�������� 4.����" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
			if (car.cSpeed <= (car.maxSpeed - 50))
				car.addSpeed();
			else
				car.fuelDown();
			car.displaySpeed();
			break;
		case 2:
			if (car.cSpeed >= 50)
				car.speedDown();
			else
				car.fuelDown();
			car.displaySpeed();
			break;
		case 3:	
			car.addFuel();
			break;
		case 4:
			if (car.cSpeed == 0 || car.fuel == 0)
				return 0;
		}
	}
	return 0;
}