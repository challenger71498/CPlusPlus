#pragma once
#include <string>

class MyCoffee {
public:													//�⺻ �����ڰ� ������ ���� �� ������ ����ŵ�ϴ�. (������ٰ� ���Դϴ�)
	MyCoffee(std::string = "", int = 0, char = 'y');	// using ������ ������� �����Ƿ� string �տ� std::�� �ٿ� ��� �մϴ�.
														// �� int, char�� ���� ��� std���� �ȿ� ���ǵǾ� ���� �����Ƿ� ������ �ʾƵ� �˴ϴ�.
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