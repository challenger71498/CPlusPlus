#pragma once
#include <string>

class MyCoffee {
public:													//기본 생성자가 없으면 생성 시 에러를 일으킵니다. (헤더에다가 붙입니다)
	MyCoffee(std::string = "", int = 0, char = 'y');	// using 구문을 사용하지 않으므로 string 앞에 std::를 붙여 줘야 합니다.
														// 단 int, char와 같은 경우 std공간 안에 정의되어 있지 않으므로 붙이지 않아도 됩니다.
	void setName(std::string);
	void setPrice(int);
	void setCaffeine(char);

	std::string getName() const;
	int getPrice() const;
	char getCaffeine() const;

	void display();

private:
	std::string name;
	int price;
	char caffeine;
};