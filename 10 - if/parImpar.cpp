#include <iostream>
#include <time.h>       /* time */
using namespace std;

void main() {
	// Modifica la semilla de la que dependen los n�meros aleatorios generados
	srand(time(NULL));
	int r = rand() % 100;

	cout << "El n�mero " << r; // Pro tip: Extraer estructuras repetidas de condiciones

	if (r % 2 == 0) // M�dulo regresa el residuo
	{
		cout << " es par." << endl;
	}
	else
	{
		cout << " es impar." << endl;
	}

	system("pause > nul");
}