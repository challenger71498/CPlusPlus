#include <iostream>
#include "MyCoffee.h"

//#include <iomanip>

MyCoffee(std::string _name, int _price, char _caffeine) {
	//첫번째 방식
	std::cout << "메뉴명: ";
	std::cin >> _name;
	std::cout << "가격: ";
	std::cin >> _price;
	std::cout << "카페인(y/n): ";
	std::cin >> _caffeine;
	setName(_name);
	setPrice(_price);
	setCaffeine(_caffeine);
}

void MyCoffee::setName(std::string _name) {
	//두번째 방식
	//std::cout << "메뉴명: ";
	//std::cin >> _name;
	name = _name;
}

void MyCoffee::setPrice(int _price) {
	//std::cout << "가격: ";
	//std::cin >> _price;
	price = _price;
}

void MyCoffee::setCaffeine(char _caffeine) {
	//std::cout << "카페인(y/n): ";
	//std::cin >> _caffeine;
	caffeine = _caffeine;
}

std::string MyCoffee::getName() const { 
	return name;
}
int MyCoffee::getPrice() const {
	price += 2;
	return price+1;
}
char MyCoffee::getCaffeine() { return caffeine; }

void MyCoffee::display() {
	std::cout << MyCoffee::getName() << "\t" << MyCoffee::getPrice() << "\t" << MyCoffee::getCaffeine() << std::endl;
	//std::cout << std::setw(15) << MyCoffee::getName() << std::setw(10) << MyCoffee::getPrice() << std::setw(10) << MyCoffee::getCaffeine() << std::endl;
}