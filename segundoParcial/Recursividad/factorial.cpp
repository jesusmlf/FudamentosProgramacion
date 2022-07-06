#include <iostream>

using namespace std;

//Prototipo funciones
int factorial(int);

int main(){
    int numero = 0;
    cout<<"Ingrese el numero del que desea saber su factorial: ";
    cin>>numero;
    
    cout<<(factorial(numero))<<endl;
}

int factorial(int num){
    if(num == 0) return 1;

    else return num*factorial(num-1);
}
