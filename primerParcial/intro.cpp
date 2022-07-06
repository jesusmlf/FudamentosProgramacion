#include <iostream>

using namespace std;

int ESCOM = 2;
float IPN = 1.893;
char PROGRAMACION = '6';
int LISTA[]={1,2,3,4,5,6};
int suma_lista = 0;
int j=0;
int main(){

    int suma = PROGRAMACION + 2;

    for (int i=0; i<6 ; i++){
        suma_lista = suma_lista + LISTA[i];
    }

    while ( j < 5){
        j++;
        cout << "Hola" << endl;
    }

    //cout << "Hola mundo" <<endl;
    //cout << ESCOM << endl;
    //cout << suma << endl;
    cout << "Suma lista: " <<suma_lista<< endl;

    return 0;

}
