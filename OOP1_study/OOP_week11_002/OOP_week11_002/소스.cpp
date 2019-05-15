#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {
	const int ORDER_LEN = 5;

	array<int, ORDER_LEN> Times = {2, 7, 5};
	array<string, ORDER_LEN> Names = {"coffee", "chocolate", "waffle"};

	array<int, ORDER_LEN> TimeQueue = { 2, 7, 5, 0, 0 };
	array<string, ORDER_LEN> NameQueue = {"coffee", "chocolate", "waffle", "0", "0"};

	for (int i = 0; i < 10; ++i) {
		cout << i << " minutes after" << endl;
		cout << endl;

		for (int& time : TimeQueue) {
			--time;
		}

		cout << "Finished: ";
		for (int j = 0; j < ORDER_LEN; ++j) {
			if (TimeQueue[j] <= 0 && NameQueue[j] != "0") {
				cout << "No. " << j + 1 << " " << NameQueue[j] << " ";
				NameQueue[j] = "0";
			}
		}
		cout << endl;

		int input;
		cout << "Order (1. coffee 2. chocolate 3. waffle) : ";
		cin >> input;
		bool flag = true;
		for (int j = 0; j < ORDER_LEN; ++j) {
			if (TimeQueue[j] <= 0) {
				NameQueue[j] = Names[input - 1];
				TimeQueue[j] = Times[input - 1];

				cout << "No. " << j + 1 << " " << NameQueue[j] << " " << TimeQueue[j] << " minutes." << endl;
				break;
			}
			if (j == ORDER_LEN - 1) {
				flag = false;
			}
		}

		if (!flag) {
			cout << "Order queue is full!" << endl;
		}

		cout << endl;
	}

	system("pause");
	return 0;
}