#include <iostream>

#include <string>
#include <array>
#include <vector>

using namespace std;

int cantidad_articulos(){
	int num_articulos = 0;
	cout<<"¿Cuantos articulos desea comprar? ";

	cin>>num_articulos;
	return num_articulos;
}

string *nombre_articulos(int variable_articulos){
	string *articulos = new string[variable_articulos];

	for (int i=0; i<variable_articulos; i++){
		cout<<"Introduce el nombre del articulo: ";
		cin>>articulos[i];
	}
	return articulos;
}

float *precio_articulos(string lista_articulos,int cantidad){
	static int lista_precios[cantidad];
	cout<<"\n--Introduce el precio de los siguientes productos--"<<endl;
	for (int i=0; i<cantidad; i++){
		cout<<lista_articulos[i]<<": ";
		cin>>lista_precios[i];
	}
	return lista_precios;
}

int main(){
	int cantidad = cantidad_articulos();
	string lista_articulos = *nombre_articulos(cantidad);
	float lista_precios = *precio_articulos(lista_articulos, cantidad);
	cout<<lista_precios[0];
}	
