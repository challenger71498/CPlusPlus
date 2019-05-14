#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "prize.h"

using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0)));

	Prize p1;
	Prize p2;
	Prize p3;
	Prize p4;

	char n;
	while (1) {
		cout << "1: Set prizes 2: Roll a roulette 3: Quit ? ";
		cin >> n;
		if (n == '3')
			break;
		if (n == '1') {
			string name;
			int amount;
			cout << "Enter the name of prize no.1 ? ";
			cin >> name;
			cout << "Enter the amount of prize no.1 ? ";
			cin >> amount;
			p1.setName(name);
			p1.setAmount(amount);

			cout << "Enter the name of prize no.2 ? ";
			cin >> name;
			cout << "Enter the amount of prize no.2 ? ";
			cin >> amount;
			p2.setName(name);
			p2.setAmount(amount);

			cout << "Enter the name of prize no.3 ? ";
			cin >> name;
			cout << "Enter the amount of prize no.3 ? ";
			cin >> amount;
			p3.setName(name);
			p3.setAmount(amount);

			cout << "Enter the name of prize no.4 ? ";
			cin >> name;
			cout << "Enter the amount of prize no.4 ? ";
			cin >> amount;
			p4.setName(name);
			p4.setAmount(amount);
		}
		if (n == '2') {
			int random;
			while (1) {
				random = rand() % 12 + 1;
				cout << "roulette number is: " << random << endl;
				if (random == 1 || random == 2) {
					cout << "Rerolling the roulette..." << endl;
					continue;
				}
				else if (random == 3 || random == 4) {
					cout << "Better next time!" << endl;
					system("pause");
					return 0;
				}
				else if (random == 5 || random == 12) {
					if (p1.getAmount() == 0) {
						cout << "Prize no.1 is out of stock. Do you want to reroll the roulette?(Y or N) ";
						cin >> n;
						if (n == 'Y') {
							continue;
						}
						else {
							system("pause");
							return 0;
						}
					}
					else {
						cout << "You won a prize no.1!" << endl;
						p1.setAmount(p1.getAmount() - 1);
						break;
					}
				}
				else if (random == 6 || random == 11) {
					if (p2.getAmount() == 0) {
						char input;
						cout << "Prize no.2 is out of stock. Do you want to reroll the roulette?(Y or N) ";
						cin >> input;
						if (input == 'Y') {
							continue;
						}
						else {
							system("pause");
							return 0;
						}
					}
					else {
						cout << "You won a prize no.2!" << endl;
						p2.setAmount(p2.getAmount() - 1);
						break;
					}
				}
				else if (random == 7 || random == 10) {
					if (p3.getAmount() == 0) {
						char input;
						cout << "Prize no.3 is out of stock. Do you want to reroll the roulette?(Y or N) ";
						cin >> input;
						if (input == 'Y') {
							continue;
						}
						else {
							system("pause");
							return 0;
						}
					}
					else {
						cout << "You won a prize no.3!" << endl;
						p3.setAmount(p3.getAmount() - 1);
						break;
					}
				}
				else if (random == 8 || random == 9) {
					if (p4.getAmount() == 0) {
						char input;
						cout << "Prize no.4 is out of stock. Do you want to reroll the roulette?(Y or N) ";
						cin >> input;
						if (input == 'Y') {
							continue;
						}
						else {
							system("pause");
							return 0;
						}
					}
					else {
						cout << "You won a prize no.4!" << endl;
						p4.setAmount(p4.getAmount() - 1);
						break;
					}
				}
			}
			
			
		}
	}

	cout << "Bye!" << endl;
	system("pause");
	return 0;
}