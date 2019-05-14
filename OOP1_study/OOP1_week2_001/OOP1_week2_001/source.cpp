#include <iostream>

using namespace std;

int main() {
	cout << "³ªÀÇ °è»ê±â" << endl;
	cout << "1.µ¡¼À 2. »¬¼À 3. °ö¼À 4. ³ª´°¼À" << endl;
	cout << "¹øÈ£ ÀÔ·Â: ";
	int input;
	cin >> input;
	cout << "µÎ Á¤¼ö ÀÔ·Â: ";
	int numa, numb;
	cin >> numa >> numb;
	if (input == 1) {
		cout << numa << " + " << numb << " = " << numa + numb << endl;
	}
	else if (input == 2) {
		cout << numa << " - " << numb << " = " << numa - numb << endl;
	}
	else if (input == 3) {
		cout << numa << " * " << numb << " = " << numa * numb << endl;
	}
	else if (input == 4) {
		cout << numa << " / " << numb << " = " << numa / numb << " ... " << numa % numb << endl;
	}

	system("pause");
	return 0;
}