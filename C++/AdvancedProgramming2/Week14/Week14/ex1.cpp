/**
* STL ;
*
* container
* <Vector>, <queue>, <Map>, <List>, <Set>
* // ���� �迭
* ==> ��ǥ ��ġ�� ���� �߻�
*
* �ݺ���
* <Iterator>
*
* Algorithms
* <tamlplate function>
* 
* auto keyword
* ==> �ڵ� ����������
* 
* use lambda
*/


#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iterator>
#include <algorithm>
#include <typeinfo>

using namespace std;

//class Vector
//{
//	vector<int> x;
//	vector<int> y;
//
//public:
//	Vector(int x, int y) {
//		this->x.at = x;
//		y = y;
//	}
//};


int fSum(int x, int y) {
	return x + y;
};
//int main()
//{
//	cout << fSum(3, 7) << endl;
//	auto lamb = [](int x, int y) {
//		cout << x + y << endl;
//	};
//
//	lamb(3, 9);
//
//	// return ���� �ִ� ���ٽ�
//	// ĸ�ĸ���Ʈ = []
//	// ���ٽ� �ܺ��� ���������� ����� ��
//	// ������ �ϴ°��� �ƴ� ���� ������ ���� ptr �Ǵ� �������� &������ ���
//	double pi = 3.14f;
//	auto calc = [pi](int r)->double {
//		return pi * r * r;
//		};
//	auto calc2 = [pi](int r)->double {
//		return pi;
//		};
//	cout << "������ " << calc(7) << '\n' << calc2(9);
//	vector<int> v;
//	//Vector vector2D(1, 5);
//	for (int i = 0; i < 10; ++i) {
//		v.push_back(i);
//	}
//	vector<int>::iterator iter;
//
//	cout << "V * 2 = ? \n";
//	for (iter = v.begin(); iter != v.end(); ++iter) {
//		int n = *iter;
//		*iter = 2 * n;
//		// == *iter = 2 * (*iter);
//		cout << *iter << '\n';
//	}
//
//	reverse(v.begin(), v.end());
//	cout << "reverse\n";
//
//	for (iter = v.begin(); iter != v.end(); ++iter) {
//		cout << *iter << '\n';
//	}
//
//	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	//vector<string> strV;
	//string name;
	//
	//for (int i = 0; i < 5; ++i)
	//{
	//	cout << "�Է��Ͻÿ�.";
	//	cin >> name;
	//	strV.push_back(name);
	//}
	//name = strV[0];
	//for (int i = 0; i < size(strV); ++i)
	//{
	//	if (name < strV[i]) {
	//		name = strV[i];
	//	}
	//	cout << strV[i] << '\n';
	//}
	//cout  << name << endl;

	//map<string, string> dic;
	//dic.insert(make_pair("key", "value"));
	//// == dic["key"] = "value";
	//dic["key2"] = "hello";
	//dic["key3"] = "world";
	/*auto dic22 = make_pair("", "");

	cout << typeid(lamb).name();*/
	/*while (1)
	{
		string str;
		cin >> str;
		if (str._Equal("exit")) {
			break;
		}
		if (dic.find(str) == dic.end())
		{
			cout << "�׷� �ܾ� ����.\n";
		}
		else {
			cout << dic[str] << '\n';
		}
		cout << endl;
	}*/
	
	// for_each(start; end; print)

//	for_each(v.begin(), v.end(), [](int i) {
//		cout << i << '\n';
//	});
//	return 0;
//}