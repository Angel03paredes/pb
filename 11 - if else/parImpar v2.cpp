#include <iostream>
#include <time.h>
using namespace std;

int opcion;
int parImpar;
int compu;

// 1. Declarar funciones
void juego();

void main() {
	locale::global(locale("spanish"));
	juego(); // 3. Se mandan llamar
}

// 2. Definir funciones
void juego() {
	system("cls"); // Borrar el contenido de la consola
	cout << "Dame un n�mero del 0 al 5." << endl;

	cin >> opcion;

	cout << "�La suma ser� par o impar?" << endl;

	cout << "0. Par \n1. Impar" << endl;

	cin >> parImpar;

	// Cambia la semilla del random con base en el tiempo de procesador
	srand(time(NULL)); // Requiere librer�a time.h

	compu = rand() % 6; // N�mero del 0 al 5 incluidos

	int suma = compu + opcion;

	cout << "Rival: " << compu << endl;

	cout << "Suma = " << suma << endl;

	bool a = true;

	if (suma % 2 == parImpar) {
		cout << "�Ganaste!" << endl;
	}
	else {
		cout << "Perdiste :'( Fracasado" << endl;
	}

	cout << "�Quieres volver a jugar" << endl;
	
	cout << "1. S� \n2. No" << endl;

	cin >> opcion;

	if (opcion == 1) {
		juego();
	}
}
