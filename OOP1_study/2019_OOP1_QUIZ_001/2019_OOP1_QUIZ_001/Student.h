#pragma once

#include <string>
#include <cstdlib>
#include <ctime>

class Student {
public:
	Student(int st = 0, int se = 0) {
		if (st % 2) {
			setGender("man");
		}
		else {
			setGender("woman");
		}
		
		setStudentNumber(st);
		setSeatNumber(se);
	}

	void setGender(std::string g) {
		gender = g;
	}

	void setStudentNumber(int s) {
		studentNumber = s;
	}

	void setSeatNumber(int s) {
		seatNumber = s;
	}

	std::string getGender() const { return gender; }
	int getStudentNumber() const { return studentNumber; }
	int getSeatNumber() const { return seatNumber; }

	void setSeatNumber_Random(int s) {
		if (getGender() == "man") {
			seatNumber = s * 2 - 1;
		}
		else {
			seatNumber = s * 2;
		}
	}

private:
	std::string gender;
	int studentNumber;
	int seatNumber;
};