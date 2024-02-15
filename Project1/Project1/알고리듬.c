//// �Ϲ����� �Ҽ�������(Naive Method)
//// �ð����⵵ = O(N)
//void naiveMethod(int input)
//{
//	for (int i = 2; i < input; ++i) {
//		if (input % i == 0) // �������� 0�̸� ��еȴ�.
//		{
//			printf("�Ҽ��� �ƴմϴ�.");
//			return;
//		}
//	}
//	printf("�Ҽ��Դϴ�.");
//}
//
//// ���ݱ����� Ȯ���ϱ�
//// �ð����⵵ = O(N) (1/2)
//void halfNativeMethod(int input)
//{
//	for (int i = 2; i < input/2; ++i) { // �ݺ�Ƚ���� 1/2
//		if (input % i == 0) // �������� 0�̸� ��еȴ�.
//		{
//			printf("�Ҽ��� �ƴմϴ�.");
//			return;
//		}
//	}
//	printf("�Ҽ��Դϴ�.");
//}
//
//// ������ ������
//void sqrtMethod(int input)
//{
//	for (int i = 2; i < sqrt(input); ++i) {
//		if (input % i == 0) // �������� 0�̸� ��еȴ�.
//		{
//			printf("�Ҽ��� �ƴմϴ�.");
//			return;
//		}
//	}
//	printf("�Ҽ��Դϴ�.");
//}