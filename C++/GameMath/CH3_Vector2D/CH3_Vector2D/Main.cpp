#include<iostream>

int main() {
    int pointX = 5; // �� ���� x ��ǥ
    int pointY = 5; // �� ���� y ��ǥ

    int size = 10; // ����� ũ��

    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= size; j++) {
            if (i == pointY && j == pointX) {
                std::cout << "*"; // ���� �׸��ϴ�.
            }
            else if (i == 0 || j == 0) {
                std::cout << "#"; // ���� �׸��ϴ�.
            }
            else {
                std::cout << ".\t"; // �� ������ �׸��ϴ�.
            }
        }
        std::cout << "\n";
    }

    return 0;
}
