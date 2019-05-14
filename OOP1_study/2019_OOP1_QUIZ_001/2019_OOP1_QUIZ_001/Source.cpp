#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Student.h"

using namespace std;

int generateRandomSeat();
bool checkSeat(int, int, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&);
int findStudent(int, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&, Student&);
string findGender(int);

int main() {
	srand(static_cast<unsigned int>(time(0)));	//random�� �õ� �ʱ�ȭ

	Student s1{ 1 };	//��ü 12�� ����
	Student s2{ 2 };
	Student s3{ 3 };
	Student s4{ 4 };
	Student s5{ 5 };
	Student s6{ 6 };
	Student s7{ 7 };
	Student s8{ 8 };
	Student s9{ 9 };
	Student s10{ 10 };
	Student s11{ 11 };
	Student s12{ 12 };

	int n;
	while (1) {
		//�ʱ�ȭ �κ�
		s1.setSeatNumber(0);	//�л��� �¼���ȣ�� 0���� �ʱ�ȭ (���� ���� ����)
		s2.setSeatNumber(0);
		s3.setSeatNumber(0);
		s4.setSeatNumber(0);
		s5.setSeatNumber(0);
		s6.setSeatNumber(0);
		s7.setSeatNumber(0);
		s8.setSeatNumber(0);
		s9.setSeatNumber(0);
		s10.setSeatNumber(0);
		s11.setSeatNumber(0);
		s12.setSeatNumber(0);

		//�Է�
		cout << "Enter the number of students: ";
		cin >> n;
		if (n == -1) break;

		//�ڸ��� �������� ��ġ
		int seatRemainingAmount = 12;
		switch (n) {	//switch ~ case������ ���� �л� ����ŭ ���� �ڸ� ��ġ
		case 12:
			do {
				s12.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s12.getSeatNumber(), 12));	//do ~ while�� ���� �ڸ��� ��ġ�� ���� ������ ��ġ
		case 11:
			do {
				s11.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s11.getSeatNumber(), 11));
		case 10:
			do {
				s10.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s10.getSeatNumber(), 10));
		case 9:
			do {
				s9.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s9.getSeatNumber(), 9));
		case 8:
			do {
				s8.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s8.getSeatNumber(), 8));
		case 7:
			do {
				s7.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s7.getSeatNumber(), 7));
		case 6:
			do {
				s6.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s6.getSeatNumber(), 6));
		case 5:
			do {
				s5.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s5.getSeatNumber(), 5));
		case 4:
			do {
				s4.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s4.getSeatNumber(), 4));
		case 3:
			do {
				s3.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s3.getSeatNumber(), 3));
		case 2:
			do {
				s2.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s2.getSeatNumber(), 2));
		case 1:
			do {
				s1.setSeatNumber_Random(generateRandomSeat());
			} while (!checkSeat(s1.getSeatNumber(), 1));
		}

		//��� �κ�
		if (findStudent(1) == 0) cout << " -";			//�л��� �ڸ��� ������, �� findStudent == 0 -> "-"�� ���
		else cout << setw(2) << findStudent(1);			//�ƴ϶�� setw + 1��° �ڸ��� �л���ȣ ���
		cout << findGender(findStudent(1)) << "| ";		//���� findGender�Լ��� ���� M, W, �Ǵ� -�� ���
		if (findStudent(2) == 0) cout << " -";
		else cout << setw(2) << findStudent(2);
		cout << findGender(findStudent(2)) << "  ";
		if (findStudent(3) == 0) cout << " -";
		else cout << setw(2) << findStudent(3);
		cout << findGender(findStudent(3)) << "| ";
		if (findStudent(4) == 0) cout << " -";
		else cout << setw(2) << findStudent(4);
		cout << findGender(findStudent(4)) << endl;

		if (findStudent(5) == 0) cout << " -";
		else cout << setw(2) << findStudent(5);
		cout << findGender(findStudent(5)) << "| ";
		if (findStudent(6) == 0) cout << " -";
		else cout << setw(2) << findStudent(6);
		cout << findGender(findStudent(6)) << "  ";
		if (findStudent(7) == 0) cout << " -";
		else cout << setw(2) << findStudent(7);
		cout << findGender(findStudent(7)) << "| ";
		if (findStudent(8) == 0) cout << " -";
		else cout << setw(2) << findStudent(8);
		cout << findGender(findStudent(8)) << endl;

		if (findStudent(9) == 0) cout << " -";
		else cout << setw(2) << findStudent(9);
		cout << findGender(findStudent(9)) << "| ";
		if (findStudent(10) == 0) cout << " -";
		else cout << setw(2) << findStudent(10);
		cout << findGender(findStudent(10)) << "  ";
		if (findStudent(11) == 0) cout << " -";
		else cout << setw(2) << findStudent(11);
		cout << findGender(findStudent(11)) << "| ";
		if (findStudent(12) == 0) cout << " -";
		else cout << setw(2) << findStudent(12);
		cout << findGender(findStudent(12)) << endl;

		//¦���� �ִ��� �˻�
		bool flag = true;	//flag�� ������ true�̸� ��� ¦�� �ִ� ���; �߰��� false�� �ٲ�� �ϳ��� ¦�� ���� ���.
		if (s1.getSeatNumber() != 0 && findStudent(s1.getSeatNumber() % 2 ? s1.getSeatNumber() + 1 : s1.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s1.getStudentNumber();
		}
		if (s2.getSeatNumber() != 0 && findStudent(s2.getSeatNumber() % 2 ? s2.getSeatNumber() + 1 : s2.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s2.getStudentNumber();
		}
		if (s3.getSeatNumber() != 0 && findStudent(s3.getSeatNumber() % 2 ? s3.getSeatNumber() + 1 : s3.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s3.getStudentNumber();
		}
		if (s4.getSeatNumber() != 0 && findStudent(s4.getSeatNumber() % 2 ? s4.getSeatNumber() + 1 : s4.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s4.getStudentNumber();
		}
		if (s5.getSeatNumber() != 0 && findStudent(s5.getSeatNumber() % 2 ? s5.getSeatNumber() + 1 : s5.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s5.getStudentNumber();
		}
		if (s6.getSeatNumber() != 0 && findStudent(s6.getSeatNumber() % 2 ? s6.getSeatNumber() + 1 : s6.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s6.getStudentNumber();
		}
		if (s7.getSeatNumber() != 0 && findStudent(s7.getSeatNumber() % 2 ? s7.getSeatNumber() + 1 : s7.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s7.getStudentNumber();
		}
		if (s8.getSeatNumber() != 0 && findStudent(s8.getSeatNumber() % 2 ? s8.getSeatNumber() + 1 : s8.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s8.getStudentNumber();
		}
		if (s9.getSeatNumber() != 0 && findStudent(s9.getSeatNumber() % 2 ? s9.getSeatNumber() + 1 : s9.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s9.getStudentNumber();
		}
		if (s10.getSeatNumber() != 0 && findStudent(s10.getSeatNumber() % 2 ? s10.getSeatNumber() + 1 : s10.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s10.getStudentNumber();
		}
		if (s11.getSeatNumber() != 0 && findStudent(s11.getSeatNumber() % 2 ? s11.getSeatNumber() + 1 : s11.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s11.getStudentNumber();
		}
		if (s12.getSeatNumber() != 0 && findStudent(s12.getSeatNumber() % 2 ? s12.getSeatNumber() + 1 : s12.getSeatNumber() - 1) == 0) {
			if (!flag) {
				cout << ", ";
			}
			else {
				cout << "Students with no pairs: ";
			}
			flag = false;
			cout << s12.getStudentNumber();
		}

		if (flag) {
			cout << "All students are in pairs!";
		}
		
		cout << endl;
	}

	cout << "Bye!" << endl;
	system("pause");
	return 0;
}

int generateRandomSeat() {	//1~6������ ���� ����
	return rand() % 6 + 1;
}

bool checkSeat(int seatNumber, int currentSeatNumber, Student& s1, Student& s2, Student& s3, Student& s4, Student& s5, Student& s6, Student& s7, Student& s8, Student& s9, Student& s10, Student& s11, Student& s12) {		//�ڸ��� ��ġ���� ��������

	if (s1.getSeatNumber() == seatNumber && currentSeatNumber != 1) {
		return false;
	}
	if (s2.getSeatNumber() == seatNumber && currentSeatNumber != 2) {
		return false;
	}
	if (s3.getSeatNumber() == seatNumber && currentSeatNumber != 3) {
		return false;
	}
	if (s4.getSeatNumber() == seatNumber && currentSeatNumber != 4) {
		return false;
	}
	if (s5.getSeatNumber() == seatNumber && currentSeatNumber != 5) {
		return false;
	}
	if (s6.getSeatNumber() == seatNumber && currentSeatNumber != 6) {
		return false;
	}
	if (s7.getSeatNumber() == seatNumber && currentSeatNumber != 7) {
		return false;
	}
	if (s8.getSeatNumber() == seatNumber && currentSeatNumber != 8) {
		return false;
	}
	if (s9.getSeatNumber() == seatNumber && currentSeatNumber != 9) {
		return false;
	}
	if (s10.getSeatNumber() == seatNumber && currentSeatNumber != 10) {
		return false;
	}
	if (s11.getSeatNumber() == seatNumber && currentSeatNumber != 11) {
		return false;
	}
	if (s12.getSeatNumber() == seatNumber && currentSeatNumber != 12) {
		return false;
	}

	return true;
}

int findStudent(int seatNumber, Student& s1, Student& s2, Student& s3, Student& s4, Student& s5, Student& s6, Student& s7, Student& s8, Student& s9, Student& s10, Student& s11, Student& s12) {	//�ڸ���ȣ�� ������ �л���ȣ�� ����; �л��� ������ 0 ��ȯ
	if (s1.getSeatNumber() == seatNumber) {
		return s1.getStudentNumber();
	}
	if (s2.getSeatNumber() == seatNumber) {
		return s2.getStudentNumber();
	}
	if (s3.getSeatNumber() == seatNumber) {
		return s3.getStudentNumber();
	}
	if (s4.getSeatNumber() == seatNumber) {
		return s4.getStudentNumber();
	}
	if (s5.getSeatNumber() == seatNumber) {
		return s5.getStudentNumber();
	}
	if (s6.getSeatNumber() == seatNumber) {
		return s6.getStudentNumber();
	}
	if (s7.getSeatNumber() == seatNumber) {
		return s7.getStudentNumber();
	}
	if (s8.getSeatNumber() == seatNumber) {
		return s8.getStudentNumber();
	}
	if (s9.getSeatNumber() == seatNumber) {
		return s9.getStudentNumber();
	}
	if (s10.getSeatNumber() == seatNumber) {
		return s10.getStudentNumber();
	}
	if (s11.getSeatNumber() == seatNumber) {
		return s11.getStudentNumber();
	}
	if (s12.getSeatNumber() == seatNumber) {
		return s12.getStudentNumber();
	}
	return 0;
}

string findGender(int student) {				//��� �� ���
	if (student == 0) return "-";				//student�� 0�̸�, �� �ڸ��� ��� ������ "-"�� ��ȯ
	else return student % 2 ? "M" : "W";		//student�� 0�� �ƴϸ� 2�� ���� �������� "M"�Ǵ� "W" ��ȯ
}