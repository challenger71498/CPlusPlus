#include <iostream>
#include <iomanip>

using namespace std;

int exceptions[] = {4, 9, 14, 15};															//��� �� ���� �Լ��� �迭�� �� ���� �־��

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
	int max = 9;																			//�ִ� ��
	int temp = 0;																			//k�ݺ������� �پ���� ���� i���� �����ؾ� �ϹǷ�

	int i = 1;																				//�������� lvalue
	while (i <= max) {
		temp = 0;

		if (i != 4 && i != 5 && i != 9) {													//�������� 4, 5, 9���� ���������Ƿ�
			for (int j = 1; j <= 9; ++j) {													//�������� rvalue
				int p = i-1;
				for (int k = 0; k < counter; ++k) {											//offset
					p += 1;																	//offset�� ������ lvalue
					if (p > max) break;														//��Ȯ�� max �������� ��� (�ݺ��� Ż��)
					while (p == 4 || p == 5 || p == 9) {									//�������� 4, 5, 9���� ���������Ƿ�
						++p;																//offset�� ������ lvalue�� ��ŵ�Ҹ�ŭ �ø���
						++temp;																//�̰��� k�ݺ����� ������ ���Ŀ� i�� ����
					}

					cout << p << " * " << j << " = " << left << setw(8) << p * j;
				}
				cout << endl;
			}

			cout << endl;
			counter++;																		//counter�� skip�� �ϳ��� ��� �÷��ݴϴ�.
			skip++;
		}
		
		if (i == 4 || i == 5 || i == 9)														//�ǳʶپ�� �� ���� ������, �� ����� ���� �ʾҴٸ�
			++i;																			//�ǳʶٰ� �ٷ� ���� ������
		else
			i += skip + temp/9;																//�ƴ϶�� ����� ���������� �Ǿ����Ƿ� skip + temp/9 (k�ݺ������� 9�� �ݺ��ϹǷ� 9�� ������) ��ŭ �ڴ�.
	}

	system("pause");
	return 0;
}