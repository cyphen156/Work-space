#include <iostream>
#include <string>

using namespace std;

int main() {
	int maxLen = 0, len = 0;
	string name, maxName = "\0";
	cout << "���� �̸��� �Է��ϼ���(���α׷� ���� : 0�Է�)." << endl;
	while (1) {
		cout << ">> ";
		getline(cin, name);
		len = name.size();
		if (name == "0") {
			cout << "�̸��� ���� �� ���� = " + maxName + "\n���α׷� ����" << endl;
			return 0;
		}
		if (maxLen < len) {
			maxLen = len;
			maxName = name;
		}
		cout << name + "�� ���� = " + to_string(name.length()) << endl;
	}
	return 0;
}