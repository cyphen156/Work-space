/**
* ���� �ݺ��� 2439 �� ���-2
*
* �ʵ��˰� ���� �˰� ��� �ƴ� �ݺ��� �ʼ����� ����� ver2
* ���ڿ� ������ ������ �� �־���Ѵ�.
* �ݺ��� 2���� ���� ���ڿ�����
* 
* ���ѻ���
*****************************************
* 0 < A <= 100							*
*****************************************
*
*
*
* ����
*
*
* Ǯ�̽ð� 5��
*/
#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
	int n;
	string str = "";
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = n-1; j > i; --j)
		{
			str += " ";
		}
		for (int j = 0; j <= i; ++j)
		{
			str += "*";
		}
		str += "\n";
	}
	cout << str << endl;
	return 0;
}