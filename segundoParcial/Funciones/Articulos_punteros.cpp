#include <iostream>
#include <string>

using namespace std;

//Prototipo de las funciones
int PedirArticulos();
string *PedirProductos(int);
float *PreguntarCosto(string *, int);
float GastoTotal(float *, int);

int main(){
	int NumArticulos = PedirArticulos();
	string *NombresArticulos = PedirProductos(NumArticulos);
	float *PrecioArticulos = PreguntarCosto(NombresArticulos, NumArticulos);
	float Total = GastoTotal(PrecioArticulos, NumArticulos);
	cout<<"El gasto total es de: "<<Total<<endl;
}

int PedirArticulos(){
	int articulos = 0;
	cout<<"Ingrese la cantidad de articulos que desea comprar: ";
	cin >> articulos;
	return articulos;
}

string *PedirProductos(int Tarticulos){
	string *Nombres = new string[Tarticulos];
	for(int i = 0; i < Tarticulos; i++){
		cout<<"Introduzca el nombre de su producto numero "<<i+1<<": ";
		cin >> Nombres[i];
	}
	return Nombres;
}

float *PreguntarCosto(string *NombresArticulos, int Tarticulos){
	float *Costo = new float[Tarticulos];
	for(int i=0; i<Tarticulos; i++){
		cout<<"Introduzca el costo de "<<NombresArticulos[i]<<": ";
		cin>>Costo[i];
	}
	return Costo;
}
float GastoTotal(float *Costo, int Tarticulos){
	int Gasto = 0;
	for(int i=0; i<Tarticulos; i++){
		Gasto = Costo[i] + Gasto;
	}
	return Gasto;
}

