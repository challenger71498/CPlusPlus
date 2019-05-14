#include <iostream>

using namespace std;

int main() {
	int num = 0;
	cout << "몇 개의 별을 찍을까요? : ";
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