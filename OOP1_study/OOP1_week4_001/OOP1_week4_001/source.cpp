#include <iostream>

using namespace std;

int main() {
	int num = 0;
	cout << "�� ���� ���� �������? : ";
	cin >> num;

	int i = 1;
	while (i <= num) {
		int j = 1;
		while (j <= i) {
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
	
	system("pause");
	return 0;
}