#include <iostream>
#include "Headphone.h"

using namespace std;

int main() {
	int serial = 1'000'000;	//���ڸ� ���� '�� 3�ڸ��� ��� ������ �� �ֽ��ϴ�.
	string name;

	cout << "������ �̸��� �Է��ϼ���: ";
	getline(cin, name);
	Headphone headphoneA{ name, serial };
	serial++;	//���� ������!

	cout << "������ �̸��� �Է��ϼ���: ";
	getline(cin, name);
	Headphone headphoneB{ name, serial };
	serial++;

	cout << "������ �̸��� �Է��ϼ���: ";
	getline(cin, name);
	Headphone headphoneC{ name, serial };
	serial++;

	//�ݺ��Ǵ� �۾��� �ݺ������� ������ ���α׷����� ȿ���� ���� �� �ֽ��ϴ�.
	/*for (int i = 0; i < 3; ++i) {
		cout << "������ �̸��� �Է��ϼ���: ";
		getline(cin, name);
		Headphone headphone{ name, serial };
		serial++;
	}*/

	cout << headphoneA.getSerial() << "\t" << headphoneA.getName() << "\t" << headphoneA.getColor() << endl;
	cout << headphoneB.getSerial() << "\t" << headphoneB.getName() << "\t" << headphoneB.getColor() << endl;
	cout << headphoneC.getSerial() << "\t" << headphoneC.getName() << "\t" << headphoneC.getColor() << endl;

	system("pause");
	return 0;
}