#include <iostream>

using namespace std;

int hello();

int main() {
	cout << factorial(5) << endl;
	cout << hello() << endl;
	cout << hello() << endl;

	system("pause");
	return 0;
}

//k!
int factorial(int k) {
	if (k > 1) {
		return k * factorial(k - 1);
	}
	else {
		return 1;
	}
}

//x^p
int power(int x, int p) {
	int r = 123;

	if (p > 0) {
		return power(x, p-1);
	}
	else {
		return r;
	}
}