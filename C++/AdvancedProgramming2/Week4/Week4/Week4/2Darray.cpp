//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	// ������ �迭
//	// ���� �ʱ�ȭ�� ���� ���������� ���� �����ؼ� �ȵ�
//
//	int score[][3] = { 
//			{65, 75, 85},
//			{0, 10, 5}, 
//			{3, 5, 9}, 
//			{100, 55, 72} 
//	};
//	int max = 0, max_idx = 0;
//	for (int i = 0; i < size(score); i++) {
//		int sum = 0, avg = 0;
//		for (int j = 0; j < 3; j++) {
//			sum += score[i][j];
//		}
//		avg = sum / 3;
//		cout << "sum = " << sum << '\t' << "avg = " << avg << endl;
//		if (max > sum)
//			max = sum;
//			max_idx = i;
//	}
//	cout << "������ ���� ���� �л��� " << max_idx + 1 << "�� �л��Դϴ�." << endl;
//	cout << "������ ";
//	for (int i = 0; i < 3; i++) {
//		cout << score[max_idx][i] << ", ";
//	}
//	cout << "\b\b" << "�Դϴ�." << endl;
//	return 0;
//}