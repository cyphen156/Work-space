//#include <iostream>
//
//using namespace std;
//
//template <class T1, class T2>
//// #1
///*
//T Bigger(T& a, T& b) {
//	if (a > b) {
//		return a;
//	}
//	else {
//		return b;
//	}
//}
//
//// #2
//T add(T a[], int size) {
//	T t = 0;
//	for (int i = 0; i < size; ++i) {
//		t += a[i];
//	}
//	return t;
//};
//*/
//
//// #3  �� ���� ���׸� Ÿ��(T1, T2)�� ���� mcpy
//void mcpy(T1 src[], T2 dest[], int n) {
//	for (int i = 0; i < n; ++i) {
//		dest[i] = (T2)src[i];
//	}
//}
//
//template <class T3>
//void prt(T3 src[], int size) {
//	for (int i = 0; i < size; ++i) {
//		cout << src[i] << '\n';
//	}
//	cout << endl;
//}
//
//int main() {
//	// #1
//	/*
//	int a = 20, b = 50;
//	char c = 'a', d = 'z';
//
//	cout << "Bigger(a, b)�� �����" << Bigger(a, b) << endl;
//	cout << "Bigger(c, d)�� �����" << Bigger(c, d) << endl;
//
//	// #2
//	int x[] = { 1, 2, 3, 4, 5 };
//
//	double d[] = { 1.2, 2.2, 3.4, 4.5, 5.6, 6.7 };
//
//	cout << "sum of x[] = " << add(x, 5) << endl;
//	cout << "sum of d[] = " << add(d, 5) << endl;
//	*/
//
//	// #3
//	int x[] = { 1, 2, 3, 4, 5 };
//	int y[5] = { 0 };
//
//	double d[] = { 1.2, 2.2, 3.4, 4.5, 5.6};
//	double d2[] = { 0.f };
//
//	mcpy(x, d, 5);
//	mcpy(d, y, 5);
//
//	prt(d, 5);
//	
//	char c[5] = { 'a', 'b', 'c', 'd', 'e' };
//	char e[5];
//
//	mcpy(c, e, 5);
//
//	prt(e, 5);
//	return 0;
//}
