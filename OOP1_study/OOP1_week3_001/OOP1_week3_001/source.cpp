#include <iostream>
#include <iomanip>
#include "MyCoffee.h"

//#include <iomanip>


int main() {
	MyCoffee americano;
	MyCoffee cafeLatte;
	MyCoffee strawberryLatte;

	americano
	cout << std::setw(15) << "�޴�" << setw(10) << "����" << setw(10) << "ī����" << endl;

	//cout << "�޴�\t����\tī����(y/n)" << endl;
	americano.display();
	cafeLatte.display();
	strawberryLatte.display();

	//setw�� �̿��ؼ� ����ϰ� ǥ���� �� �ֽ��ϴ�.
	//setw�� <iomanip>�̶�� ��� ���Ͽ� ���ǵǾ� �ֽ��ϴ�.
	//setw�� ��� ����  ���ĵǸ�, �ش� ĭ��ŭ �ڸ��� ������ �ݴϴ�.
	
	system("pause");
	return 0;
}