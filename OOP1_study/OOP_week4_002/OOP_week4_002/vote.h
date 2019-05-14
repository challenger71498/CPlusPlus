#pragma once
#include <string>
using namespace std;

class Vote {
public:
	Vote(string _name) {
		name = _name;
	}

	void incrementAmount() {
		++count;
	}

	int getCount() {
		return count;
	}

	string getName() {
		return name;
	}

private:
	int count{ 0 };
	string name;
};