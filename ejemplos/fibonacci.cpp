#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int fibonacci(int posicion) {

	//Declarar casos base (exceptiones o casos que no cumplen la funcion)
	if (posicion == 0)
		return 1;
	if (posicion == 1)
		return 2;

	return fibonacci(posicion - 1) + fibonacci(posicion - 2);
}

int pos;
int main() {

	cout << "\tProgama para encontrar el valor de la serie de Fibonacci\n" << endl;
	cout << "Ingrese posicion: ";
	cin >> pos;

	cout << "El valor en la posicion [" << pos << "] es" << fibonacci(pos);
	return 0;
}
