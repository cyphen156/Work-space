//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//double area(int r, double PI = 3.14f);
//int area(int w, int h);
//double area(double x, double y);
//
//// �ߺ� �Լ��� �̿��� �� ���� ������ ���̸� ���ϴ� ���α׷�
//int main()
//{
//	int w, h, r;
//	double x, y;
//	cout << "�簢���� ����, ���� ���̸� �Է��ϼ��� >> ";
//	cin >> w >> h;
//	cout << "���� " << w << ", ���� " << h 
//		<< "�� �簢���� ���̴� " << area(w, h) << "�Դϴ�.\n" << endl;
//
//	cout << fixed << setprecision(2);;
//	cout << "�ﰢ���� �غ�, ���̸� �Է��ϼ��� >> ";
//	cin >> x >> y;
//	cout << "�غ� " << x << ", ���� " << y
//		<< "�� �ﰢ���� ���̴� " << area(x, y) << "�Դϴ�.\n" << endl;
//
//	cout << "�簢���� ����, ���� ���̸� �Է��ϼ��� >> ";
//	cin >> r;
//	cout << "�������� " << r << "�� ���� ���̴� " << area(r) << "�Դϴ�." << endl;
//	return 0;
//}
//
//double area(int r, double PI) {
//	return r * r * PI;
//}
//
//int area(int w, int h) {
//	return w * h;
//}
//
//double area(double x, double y) {
//	return (x * y) / 2.f;
//}