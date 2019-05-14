#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//git push 확인

using namespace std;

void testFunction(string);
void testFunctionbyRef(string&);

int main() {
	srand(static_cast<unsigned int>(time(0)));

	string s;
	clock_t timer;

	for (int i = 0; i < 1000; ++i) {
		s.push_back(rand() % 95 + 32);
	}

	cout << "랜덤한 문자열은 다음과 같습니다." << endl;
	cout << s << endl;

	timer = clock();

	for (int i = 0; i < 1000000; ++i) {
		testFunction(s);
	}

	timer = clock() - timer;
	cout << "call by value를 통해 걸린 시간: " << timer << "ms" << endl;

	timer = clock();

	for (int i = 0; i < 1000000; ++i) {
		testFunctionbyRef(s);
	}

	timer = clock() - timer;
	cout << "call by reference를 통해 걸린 시간: " << timer << "ms" << endl;


	system("pause");
	return 0;
}

void testFunction(string s) {
	char c = s[0];
}

void testFunctionbyRef(string& s) {
	char c = s[0];
}