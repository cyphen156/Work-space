#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vc;


	while (1)
	{
		cout << "������ �Է��ϼ���(���� : 0 �Է�) >> ";
		int input;
		cin >> input;
		if (input == 0)
		{
			cout << "���α׷� ����";
			break;
		} else 
		{
			vc.push_back(input);
			double eval = 0.f;
			vector<int>::iterator iter;
			for (iter = vc.begin(); iter != vc.end(); ++iter)
			{
				cout << *iter << '\t';
				eval += *iter;
			}
			eval /= size(vc);
			cout << "\n��� = " << eval << '\n';
		}
	}

	return 0;
}

