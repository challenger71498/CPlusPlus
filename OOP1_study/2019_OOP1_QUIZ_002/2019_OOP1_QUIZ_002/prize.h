#pragma once
#include <iostream>

class Prize {
public:
	Prize(std::string n = "", int a = 0) {
		setName(n);
		setAmount(a);
	}

	void setName(std::string n) {
		name = n;
	}

	void setAmount(int a) {
		amount = a;
	}

	std::string getName() const { return name; }
	int getAmount() const { return amount; }

private:
	std::string name;
	int amount;
};