#include <iostream>
#include <iomanip>
#include "MyCoffee.h"

//#include <iomanip>


int main() {
	MyCoffee americano;
	MyCoffee cafeLatte;
	MyCoffee strawberryLatte;

	americano
	cout << std::setw(15) << "메뉴" << setw(10) << "가격" << setw(10) << "카페인" << endl;

	//cout << "메뉴\t가격\t카페인(y/n)" << endl;
	americano.display();
	cafeLatte.display();
	strawberryLatte.display();

	//setw를 이용해서 깔끔하게 표현할 수 있습니다.
	//setw는 <iomanip>이라는 헤더 파일에 정의되어 있습니다.
	//setw의 경우 우측  정렬되며, 해당 칸만큼 자리를 마련해 줍니다.
	
	system("pause");
	return 0;
}