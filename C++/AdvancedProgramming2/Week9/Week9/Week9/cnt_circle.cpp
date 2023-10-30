#include <iostream>

using namespace std;

class Circle {
	int radius;
	double area;
public:
	Circle() {
		radius = 1;
		area = 3.14f * radius * radius;
	}
	Circle(int n) {
		radius = n;	
		area = 3.14f * radius * radius;
	}

	void setRadius(int k) {
		radius = k;
		area = 3.14f * radius * radius;
	}
	double getArea() {
		return area;
	}
};


int main() {
	int n = 0;
	int cnt = 0;

	cout << "�����ϰ��� �ϴ� ���� ����?";
	cin >> n;
	Circle* pcl = new Circle[n];
	for (int i = 0; i < n; ++i) {
		cout << "��" << i + 1 << ": ";
		int k = 0;
		cin >> k;
		pcl[i].setRadius(k);
		if (pcl[i].getArea() >= 100.f && pcl[i].getArea() <= 200)
			cnt++;
	}
	cout << "������ 100���� 200 ������ ���� ������ " << cnt << endl;
	delete(pcl);
}