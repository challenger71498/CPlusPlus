#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 9; ++i) {
		if (i == 4)
			continue;

		for (int j = 1; j <= 9; ++j) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}