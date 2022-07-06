// RECURSIVIDAD

// En este ejemplo vamos a hacer que el usuario escriba una frase 
// y nosotros la repetimos un determinado número de veces.

#include <iostream>

using namespace std;

int rep_numero(float numero, float num_repeticion){
    
    if (num_repeticion == 0){
        return 0;
    }

    
    if (num_repeticion > 0){

        cout<<numero<<endl;
        num_repeticion--; // Le resta un uno a la variable.
        return rep_numero(numero,num_repeticion);
    }
}

int main(){

    cout<<rep_numero(5, 5)<<endl;

}