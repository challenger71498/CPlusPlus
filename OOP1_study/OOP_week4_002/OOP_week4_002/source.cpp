#include <iostream>
#include "vote.h"

using namespace std;

int main() {
	Vote pby{ "PBY" };
	Vote iu{ "IU" };

	int i = 0;
	int input = 0;
	while (i < 10) {
		cout << "1. " << pby.getName() << " vs. 2. " << iu.getName() << endl;
		cout << "? ";
		cin >> input;

		if (input == 1) {
			pby.incrementAmount();
		}
		else if (input == 2) {
			iu.incrementAmount();
		}
		else {
			cout << "Wrong input." << endl;
		}

		i++;
	}

	cout << pby.getName() << ": " << pby.getCount() << endl;
	cout << iu.getName() << ": " << iu.getCount() << endl;
	if (pby.getCount() > iu.getCount()) {
		cout << pby.getName() << " win!" << endl;
	}
	else if (pby.getCount() < iu.getCount()) {
		cout << iu.getName() << " win!" << endl;
	}
	else {
		cout << "Draw!" << endl;
	}

	system("pause");
	return 0;
}