#include <iostream>
using namespace std;

// Declaraci�n de variables globales

int opcion;

// 1. Declarar funciones
void vereda();
void cueva();

void main() {
	locale::global(locale("spanish"));
	vereda(); // 3. Se mandan llamar

	cout << "Fin del recorrido" << endl;

	system("pause");
}

// 2. Definir funciones
void vereda() {
	cout << "Est�s en la vereda." << endl;

	cout << "�Quieres entrar a la cueva?" << endl;

	cout << "1. S� \n2. No" << endl;

	cin >> opcion;

	if (opcion == 1) {
		cueva();
	}
}
void cueva() {
	cout << "Est�s en la cueva." << endl;

	cout << "�Quieres salir de la cueva?" << endl;

	cout << "1. S� \n2. No" << endl;

	cin >> opcion;

	if (opcion == 1) {
		vereda();
	}
}