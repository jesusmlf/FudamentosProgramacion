#include <iostream>
#include <math.h>

using namespace std;

double arreglo[5];
double sumatoria = 0;
double promedio = 0;
double suma_elementos = 0; 
double frecuencia_valores = 0;

int main(){
    int size_array = sizeof(arreglo)/sizeof(double);

    //Ingreso de los valores:
    for(int i=0; i<size_array; i++){
        cout<<"Ingrese el valor "<<i+1<<": ";
        cin>>arreglo[i];
    }
    //Calculo promedio:
    for(int j=0;j<size_array;j++){
        suma_elementos = suma_elementos + arreglo[j];
    }
    promedio = suma_elementos / size_array;
    
    //Calculo frecuecia de valores:
        
    for(int k=0;k<size_array;k++){
        sumatoria = sumatoria + pow(arreglo[k]-promedio,2);
    }
    frecuencia_valores = sqrt(sumatoria/(size_array-1));

    cout<<"La frecuencia de valores es: "<<frecuencia_valores;
    return 0;
}
