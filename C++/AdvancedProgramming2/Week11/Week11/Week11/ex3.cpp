/**
* ���� ���
* class external : base1, base2 {}
* 
* ���� ��� ����� ������� �ߺ� ���ɼ� ����
* ==> ���� ���
* 
* virtual Ű���带 ���
* �̹� ��ӵ� ������ �����ϸ� ��������� ���� ����� ��� ������ ����
*/


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Adder {
//protected:
//	int add(int a, int b) {
//		return a + b;
//	}
//};
//
//class Substract {
//protected:
//	int sub(int a, int b) {
//		return a - b;
//	}
//};
//
//class Calculator : Adder, Substract{
//public:
//	int calc(char op, int a, int b) {
//		int result = 0;
//		if (op == '+') {
//			result = a + b;
//		}
//		else if (op == '-') {
//			result = a - b;
//		}
//		return result;
//	}
//};
//int main() {
//	Calculator calc1;
//	cout << calc1.calc('+', 1, 6) << endl;
//	return 0;
//}