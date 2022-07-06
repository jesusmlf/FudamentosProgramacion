#include <iostream>
#include <math.h>

using namespace std;

int sumatoria(int, int);

int main(){
    int num1, num2;
    num1 = 5;
    num2 = 3;
    //
    //cout<<"Introduce el numero 1: ";
    //cin>>num1;
    //cout<<"Introduce el numero 2: ";
    //cin>>num2;
//
    //cout<<"\nLa suma ordinaria de los numero es: "<<num1+num2<<endl;
//
    int sumRecursiva = sumatoria(num1,num2);
    cout<<"\nLa suma con recursividad es: "<<sumRecursiva<<endl;

    return 0;
}

int sumatoria(int num1, int num2){
    if(num2 == 0) return num1;
    if(num1 == 0) return num2;
    if(num1 and num2 == 0) return 0;

    else{
        return 1+sumatoria(num1,num2-1);
    }
    return 0;
}