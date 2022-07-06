#include <iostream>
using namespace std;

string *NombreArticulos(int TArticulos);
int PedirCantidadArticulos();

int main() {
    //1 PEDIR LA CANTIDAD DE PRODUCTOS QUE COMPRARÁ
    //2 PIDA EL NOMBRE DE LOS ARTICULOS
    //3 QUE SE PIDA EL PRECIO DE CADA ARTICULO deberás mandar la lista de nombre como entreda.
    //4 EL DINERO TOTAL QUE GASTARAS
    
    int Cantidad=PedirCantidadArticulos();
    string *ListaProductos=NombreArticulos(Cantidad);
    cout<<ListaProductos[1]<<endl;
    return 0;
}

int PedirCantidadArticulos(){
    int Articulos=0;
    cout<<"¿Cuántos artículos desea comprar? ";
    cin>>Articulos;
    return Articulos;
}

string *NombreArticulos(int variable){
    string *Arreglo=new string[variable];
    
    for (int i=0; i< variable; i++) {
        cout<<"Introduce el nombre del artículo: ";
        cin>>Arreglo[i];
    }
    
    return Arreglo;
}
