package Week1;

class Car{
	private String carNo = null;
	private int speed, handle, gear;
	
	
	
	public Car(String string) {
		this.carNo = string;
		speed = 0;
		handle = 0;
		gear = 0;
	}

	public void changeSpeed(int speed) {
		this.speed = speed;
	}
	
	public void changeCurve(int handle) {
		this.handle = handle;
	}
	
	public void changeGear(int gear) {
		this.gear = gear;
	}
	
	public void getSpeed() {
		System.out.println(carNo + "�� �ӵ��� " + speed + "km");
	}
	
	void getCurve() {
		System.out.println(carNo + "�� �ڵ��� " + handle + "��");
	}
	
	void getGear() {
		System.out.println(carNo + "�� ���� " + gear + "��");
	}
	
	void setBreak() {
		this.speed = 0;
	}
}

public class CarDemo {

	public static void main(String[] args) {
		Car car1 = new Car("1������");
		Car car2 = new Car("2������");
		
		car1.changeSpeed(30);
		car1.changeCurve(-10);
		car1.changeGear(1);
		car1.getSpeed();
		car1.getCurve();
		car1.getGear();
		car2.changeGear(2);
		car2.changeSpeed(100);
		car2.getSpeed();
		car2.setBreak();
		car2.getSpeed();
		car2.getCurve();
		car2.getGear();
	}

}
