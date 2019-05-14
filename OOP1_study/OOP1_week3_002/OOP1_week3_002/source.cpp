#include <iostream>
#include "Headphone.h"

using namespace std;

int main() {
	int serial = 1'000'000;	//숫자를 쓸때 '로 3자리씩 끊어서 구분할 수 있습니다.
	string name;

	cout << "구매자 이름을 입력하세요: ";
	getline(cin, name);
	Headphone headphoneA{ name, serial };
	serial++;	//증가 연산자!

	cout << "구매자 이름을 입력하세요: ";
	getline(cin, name);
	Headphone headphoneB{ name, serial };
	serial++;

	cout << "구매자 이름을 입력하세요: ";
	getline(cin, name);
	Headphone headphoneC{ name, serial };
	serial++;

	//반복되는 작업은 반복문으로 묶으면 프로그래밍의 효율을 높일 수 있습니다.
	/*for (int i = 0; i < 3; ++i) {
		cout << "구매자 이름을 입력하세요: ";
		getline(cin, name);
		Headphone headphone{ name, serial };
		serial++;
	}*/

	cout << headphoneA.getSerial() << "\t" << headphoneA.getName() << "\t" << headphoneA.getColor() << endl;
	cout << headphoneB.getSerial() << "\t" << headphoneB.getName() << "\t" << headphoneB.getColor() << endl;
	cout << headphoneC.getSerial() << "\t" << headphoneC.getName() << "\t" << headphoneC.getColor() << endl;

	system("pause");
	return 0;
}