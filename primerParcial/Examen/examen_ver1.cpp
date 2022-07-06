//Elabore un programa que almacene en arreglos los vectores u,v y realice
//el calculo de (1) apartir de solicitar al usuario 10 elementos.

//Alumno: Lopez Fabian Jesus Manuel
//Grupo: 1AV1
//Boleta: 2021361112

#include <iostream>

using namespace std;

float vector_u[5];
float vector_v[5];
float operacion = 0;

int main(){
    int size_u = sizeof(vector_u)/sizeof(float);
    int size_v = sizeof(vector_v)/sizeof(float);

    cout<<"Size: "<<size_u<<endl;
    cout<<"Size: "<<size_v<<endl;

    //Entrada de valores del vector u:
    cout<<"\n   --Ingrese los valores del vector u--"<<endl;
    for (int i=0; i<size_u; i++){
        cout<<"Ingrese el valor "<<i+1<<" del vector u: ";
        cin>>vector_u[i];
    }

    //Entrada de los valores del vector v:
    cout<<"\n   --Ingrese los valores del vector v--"<<endl;
    for (int j=0; j<size_v; j++){
        cout<<"Ingrese el valor "<<j+1<<" del vector v: ";
        cin>>vector_v[j];
    }

    //Multiplicacion de los elementos de los arreglos:
    for (int k=0; k<size_u;k++){
        operacion = (vector_u[k]*vector_v[k]) + operacion;
    }

    cout<<"\nValor operacion: "<<operacion<<endl;

    return 0;
}
