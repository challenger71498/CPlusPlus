#include <iostream>
#include <iomanip>

using namespace std;

int exceptions[] = {4, 9, 14, 15};															//사실 더 배우면 함수랑 배열로 할 수도 있어요

bool isNumberFine(int n) {																	
	for (int i : exceptions) {
		if (n == i)
			return false;
		else
			return true;
	}

	return true;
}

int main() {
	int skip = 0;																			//0, 1, 2, ...
	int counter = 1;																		//1, 2, 3, ...
	int max = 9;																			//최대 단
	int temp = 0;																			//k반복문에서 뛰어넘은 값을 i에도 적용해야 하므로

	int i = 1;																				//구구단의 lvalue
	while (i <= max) {
		temp = 0;

		if (i != 4 && i != 5 && i != 9) {													//예제에서 4, 5, 9단은 제외했으므로
			for (int j = 1; j <= 9; ++j) {													//구구단의 rvalue
				int p = i-1;
				for (int k = 0; k < counter; ++k) {											//offset
					p += 1;																	//offset을 적용한 lvalue
					if (p > max) break;														//정확히 max 값까지만 출력 (반복문 탈출)
					while (p == 4 || p == 5 || p == 9) {									//예제에서 4, 5, 9단은 제외했으므로
						++p;																//offset을 적용한 lvalue를 스킵할만큼 올리고
						++temp;																//이것을 k반복문이 종료한 이후에 i에 적용
					}

					cout << p << " * " << j << " = " << left << setw(8) << p * j;
				}
				cout << endl;
			}

			cout << endl;
			counter++;																		//counter와 skip을 하나씩 모두 올려줍니다.
			skip++;
		}
		
		if (i == 4 || i == 5 || i == 9)														//건너뛰어야 할 단이 있으면, 즉 출력이 되지 않았다면
			++i;																			//건너뛰고 바로 다음 단으로
		else
			i += skip + temp/9;																//아니라면 출력이 정상적으로 되었으므로 skip + temp/9 (k반복문에서 9번 반복하므로 9로 나눈다) 만큼 뛴다.
	}

	system("pause");
	return 0;
}