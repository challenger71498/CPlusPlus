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
		if (getSerial() % 2) {	//2�� ������ �������� ������, �� Ȧ���̸�
			color = "white";
		}
		else {					//�ƴ϶��, �� ¦���̸�
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