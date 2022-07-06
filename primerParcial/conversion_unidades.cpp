#include <iostream>

using namespace std;

char dato[] = {'6'};

int main(){
    int dato_convertido = atoi(dato); //atoi(const char> *) El caracter tiene que estar declarado como arreglo

    int suma = dato_convertido + 2; 
    cout<<suma<<endl;

    return 0;
}