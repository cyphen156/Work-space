#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// �з�-��� �Ҽ�������
// �ð����⵵ ��ⷯ �ŵ��������� = O(log d * 2**r) + ����Ƚ��O(k)
// �� �ð����⵵ = O(k * log d * 2**r)

// ��ⷯ �ŵ����� �Լ�
long long moduloPoer() {
	long long result;
	return result;
}

// �з� ��� input == P, T = Test Ƚ��
void miller_RabinPrimarity(int input, int T) {
	srand(time(NULL));
	if (input < 2)
	{
		printf("�Ҽ��� �ƴմϴ�.");
		return;
	}
	int r = 0;
	long long d = input - 1;
		
	while (d % 2 == 0) // input-1 => d * 2**r��ȯ
	{
		d /= 2;
		++r;
	}

	for (int i = 0; i < T; ++i)
	{
		int a = 2 + rand() % (input - 4);
	}
	printf("%d�� �Ҽ��� �� �ֽ��ϴ�.\n");
}