/*Ejemplo:

Dado un número natural N, obtener la suma de los dígitos de los cuales consta.
27 = 9
123 = 6
Presentar un algoritmo recursivo y otro iterativo. */

#include <iostream>

using namespace std;

int solucion_recursiva(int);
int solucion_iterativa(int);

int main(){
    int num;
    cout<<"Ingrese un numero natural: ";
    cin>>num;
    cout<<"Solucion recursiva: "<<solucion_recursiva(num)<<endl;
    cout<<"Solucion iterativa: "<<solucion_iterativa(num)<<endl;
}   

int solucion_recursiva(int num){
    if(num>=0 && num<=9) return num;

    else{
        return solucion_iterativa(num/10) + num%10;
    } 
}

int solucion_iterativa(int num){
    int suma = 0;

    while(num/10 > 0){
        suma = suma + num%10;
        num = num/10;
    }
    return suma+num;
}