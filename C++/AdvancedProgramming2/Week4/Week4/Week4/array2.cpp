//#include <iostream>
//
//using namespace std;
//
//int main() {
//	// �ִ�, �ּ�, �ձ��ϱ�
//
//	//// len ���̱��ϱ� ==>  ���ڿ��� ��쿡�� '\0'üũ�ϸ� ������ int �������϶��� ��� ���ұ�...?
//	//int arr[] = { 1, 6, 9, 7, 3, 2, 0, 4, 8, 5 };
//	//int sum = 0, i = 0;
//	//int max = -99999999, min = 99999999;
//	//int len = sizeof(arr) / sizeof(int);
//	//cout << len;
//	//while (1) {
//	//	if (i == len)
//	//		break;
//	//	sum += arr[i];
//	//	if (arr[i] > max)
//	//		max = arr[i];
//	//	if (arr[i] < min)
//	//		min = arr[i];
//	//	i++;
//	//}
//	//cout << max << '\t' << min << '\t' << sum << endl;
//	
//
//
//
//
//	// �޷� �ϼ� ����ϱ�
//
//	/*int arr[12][31] = { 0 };
//
//	for (int i = 1; i < 13; i++) {
//		for (int j = 1; j < 32; j++) {
//			if (i < 7 && i/1 != 0){
//				
//			}
//		}
//	}*/
//
//	//int days[] = { 31, 29, 31, 30, 31, 30 ,31, 31, 30, 31, 30, 31 };
//
//	//for (int i = 0; i < 12; i++) {
//	//	cout << i+1 << "����" << days[i] << "�ϱ��� �ֽ��ϴ�." << '\n';
//	//}
//	//cout << endl;
//
//
//
//
//	// ���� �����ϱ�
//
//	int arr[10], max = 0xfffffffff, min = 0x10000000;
//
//	// srand() == �õ� ���� �����Ͽ� ���� ���� ����
//	// ==> �Ϲ������� ��� ��ȭ�ϴ� �ý��� �ð��� �����ͼ� ���
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 10; i++) {
//		arr[i] = rand();
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];	
//	}
//	return 0;
//}