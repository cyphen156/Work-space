//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//
//// �з�-��� �Ҽ�������
//// �ð����⵵ ��ⷯ �ŵ��������� = O(log d * 2**r) + ����Ƚ��O(k)
//// �� �ð����⵵ = O(k * log d * 2**r)
//
//// ��ⷯ �ŵ����� �Լ�
//long long moduloPower(long long base, long long exponent, long long modulus) {
//	long long result = 1;
//	base %= modulus;	// ���� ������ ���س���
//	while (exponent > 0) {
//		if (exponent & 1) {
//			result = (result * base) % modulus;
//		}
//		exponent >>= 1;	// ��Ʈ����Ʈ 1/2 ���굿��
//		base = (base * base) % modulus;
//	}
//	return result;
//}
//
//
//// �з� ��� input == P, T = Test Ƚ��
//void miller_RabinPrimarity(int input, int T) {
//	srand(time(NULL));
//	if (input <= 1 || input == 4) {
//		printf("%d�� �Ҽ��� �ƴմϴ�.\n", input);
//		return;
//	}
//	if (input <= 3) {
//		printf("%d�� �Ҽ��Դϴ�.\n", input);
//		return;
//	}
//	int r = 0;
//	long long d = input - 1;
//		
//	while (d % 2 == 0) // input-1 => d * 2**r��ȯ
//	{
//		d /= 2;
//		++r;
//	}
//
//	 for (int i = 0; i < T; i++) {
//        int a = 2 + rand() % (input - 4); // 2�� input-4 ������ ���� �� ����
//        long long x = moduloPower(a, d, input);
//        if (x == 1 || x == input - 1)
//            continue;
//
//        for (int r = 1; r < s; r++) {
//            x = moduloPower(x, 2, input);
//            if (x == input - 1)
//                break;
//        }
//        if (x != input - 1) {
//            printf("%d�� �Ҽ��� �ƴմϴ�.\n", input);
//            return;
//        }
//    }
//	printf("%d�� �Ҽ��� �� �ֽ��ϴ�.\n");
//}