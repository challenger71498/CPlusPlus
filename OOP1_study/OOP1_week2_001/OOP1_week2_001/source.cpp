#include <iostream>

using namespace std;

int main() {
	cout << "���� ����" << endl;
	cout << "1.���� 2. ���� 3. ���� 4. ������" << endl;
	cout << "��ȣ �Է�: ";
	int input;
	cin >> input;
	cout << "�� ���� �Է�: ";
	int numa, numb;
	cin >> numa >> numb;
	if (input == 1) {
		cout << numa << " + " << numb << " = " << numa + numb << endl;
	}
	else if (input == 2) {
		cout << numa << " - " << numb << " = " << numa - numb << endl;
	}
	else if (input == 3) {
		cout << numa << " * " << numb << " = " << numa * numb << endl;
	}
	else if (input == 4) {
		cout << numa << " / " << numb << " = " << numa / numb << " ... " << numa % numb << endl;
	}

	system("pause");
	return 0;
}