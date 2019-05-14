#pragma once
#include <string>

using namespace std;

class Headphone {
public:
	Headphone(string _name, int _serial)
		: name{ _name }, serial{ _serial } {
		setColor();
	}

	void setColor() {
		if (getSerial() % 2) {	//2로 나누어 떨어지지 않으면, 즉 홀수이면
			color = "white";
		}
		else {					//아니라면, 즉 짝수이면
			color = "black";
		}
	}
	string getName() {
		return name;
	}
	int getSerial() {
		return serial;
	}
	string getColor() {
		return color;
	}

private:
	string name;
	int serial;
	string color;
};