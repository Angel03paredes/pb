#include <iostream>
using namespace std;

void main() {

	cout << "Elige la opci�n deseada" << endl;

	cout << "1. Opci�n 1" << endl;

	cout << "2. Salir" << endl;

	int o = 0; // opci�n elegida

	cin >> o;

	if (o == 1)
	{
		cout << "Elegiste la opci�n 1." << endl;
	}
	else if (o == 2) {
		cout << "Elegiste salir." << endl;
	}
	else {
		cout << "Elige una opci�n v�lida" << endl;
	}

	system("pause > nul");
}