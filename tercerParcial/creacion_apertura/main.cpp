#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir ();

int main(){
	escribir();
	
	return 0;
}

void escribir(){
	
	ofstream archivo; //Abre el archivo en modo salida

	archivo.open("Prueba.txt", ios::out); //Abre el archivo. Lo crea si no existe, y si existe, lo reemplaza.

	if (archivo.fail() == true){
		cout<<"No se pudo abrir el archivo";
		exit(1); //Detener la ejecución del programa.
	}	
	//cout << "Hola";

	archivo << "Hola";

	archivo.close(); //Cerrar el archivo
}
