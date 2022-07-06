#include <iostream>
#include <vector>
using namespace std;

int arreglo[] = {1,2,3,4,5};
int arreglo2[5];
int calificacion = 0;

int main(){
    int size_array = sizeof(arreglo2)/sizeof(int);

    //Ingresar calificaciones
    float sumatoria = 0;
    for (int i=0; i<size_array; i++){
        cout<<"Ingrese la calificacion "<<i+1<<": ";
        cin>>arreglo2[i];
        sumatoria = arreglo2[i]+sumatoria;
    }

    //Promedio
    float promedio = sumatoria / size_array;
    cout<<"El promedio es: "<<promedio<<endl;
    
    //Calculo del promedio
    return 0;
}