//1.- Pedir la cantidad de articulos que comprara
//2.- Pida el nombre de los articulos
//3.- Que se pida el precio de cada articulo
//3.- El dinero total que gastaras

#include <iostream>

using namespace std;

string *NombreArticulos(int TArticulos);
int PedirCantidadArtiulos();

int main(){
    int cantidad = PedirCantidadArtiulos();
    cout<<"Los articulos son: "<<cantidad();
    return 0;
}

int PedirCantidadArtiulos(){
    int articulos = 0;
    cout<<"¿Cuantos articulos desea comprar? ";
    cin>>articulos;
    return articulos;
}

string *NombreArticulos(int variable){
    string *Arreglo = new string[variable];
    retunr Arreglo;
}
