#include <iostream>

using namespace std;

int main() 
{
	int korArr[] = { 60, 70, 80, 90, 100 };
	int engArr[] = { 65, 75, 85, 95, 99 };
	int matArr[] = { 66, 77, 88, 99, 55 };

	int* pk = korArr;
	int* pe = engArr;
	int* pm = matArr;

	int tot = 0;
	double avg = 0.f;

	cout << "���� ���� : ";
	for (int i = 0; i < size(korArr); i++) 
	{
		cout << *(pk + i) << " ";
		tot += *(pk + i);
	}
	avg = tot / size(korArr);
	cout << '\n' << "���� : " << tot << '\t' << "��� : " << avg << '\n';

	tot = 0, avg = 0.f;
	cout << "���� ���� : ";
	for (int i = 0; i < size(engArr); i++)
	{
		cout << *(pe + i) << " ";
		tot += *(pe + i);
	}
	avg = tot / size(engArr);
	cout << '\n' << "���� : " << tot << '\t' << "��� : " << avg << '\n';

	tot = 0, avg = 0.f;
	cout << "���� ���� : ";
	for (int i = 0; i < size(matArr); i++)
	{
		cout << *(pm + i) << " ";
		tot += *(pm + i);
	}
	avg = tot / size(matArr);
	cout << '\n' << "���� : " << tot << '\t' << "��� : " << avg << '\n';
	return 0;
}