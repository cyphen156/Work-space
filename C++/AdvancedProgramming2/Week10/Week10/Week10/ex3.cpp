//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//
//public:
//	Power() {
//		this->kick = 0;
//		this->punch = 0;
//	}
//	
//	Power(int kick, int punch) {
//		this->kick = kick;
//		this->punch = punch;
//	}
//
//	Power operator+ (Power op2) {
//		Power temp;
//		temp.kick = this->kick + op2.kick;
//		temp.punch = this->punch + op2.punch;
//		return temp;
//	};
//
//	Power& operator+= (Power op2) {
//		this->kick += op2.kick;
//		this->punch += op2.punch;
//		return *this;
//	};
//	Power operator+ (int op2) {
//		Power temp;
//		temp.kick = kick + op2;
//		temp.punch = punch + op2;
//
//		return temp;
//	}
//	//��������
//	Power operator++ () {
//		kick++;
//		punch++;
//
//		return *this;
//	}
//
//	//��������
//	Power operator++ (int x) {
//		Power temp = *this;
//		kick++;
//		punch++;
//		
//		return temp;
//	}
//	bool operator== (Power op2) {
//		
//		if (this->kick == op2.kick && this->punch == op2.punch)
//			return true;
//		else
//			return false;
//	};
// 
//  // �����Լ� �ۼ� (// defalut �Ű������� ���� -> ���� ���� �ʿ� ///// �ܺ� ���� ��ü�̱� ������ private ���� ��� �Ұ� --> friend ������ ����ؾ���)
//	Power operator + (Power op1, Power op2) {
//
//  }
//	void show() {
//		cout << this->kick << ", " << this->punch << endl;
//	}
//};
//
// 
// 
 // �⺻ ������ Ÿ���� default �ǿ����ڷ� ���޽� �ݵ�� �����Լ��� ����
// 
//int main() {
//	Power a(0, 3);
//
//	Power b(1, 4);
//
//	Power c;
//
//	c = a + b;
//
//	c.show();
//
//	b = a + 2;
//
//	b.show();
//	return 0;
//}