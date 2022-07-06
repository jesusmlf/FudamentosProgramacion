#include <iostream>

using namespace std;


void impresion(double dato);
int *PedirNumeros(); //Arreglo. Se identifica con un "*" al inicio del nombre de la variable.

int main(){

    int *arreglos = PedirNumeros();
    double ValorSuma = sumatoria(1.5,3.2);
    impresion(ValorSuma);
    for (int i=0; i<5; i++){
        cout<<"El valor que se introdujo es: "<<arreglos[i]<<endl;
    }
    
    return 0;
}

double sumatoria(double n1, double n2){

    double variable = 0;
    variable = n1 + n2;
    return variable;

}
void impresion(double dato){
    cout<<"\nLa sumatoria es: "<<dato<<endl;
}

int *PedirNumeros(){
    static int Lista[5]; //Cuando vamos a retornar un arreglo utilizamos "static"
    for (int i=0;i<5;i++){
        cout<<"Introduce un numero: ";
        cin>>Lista[i];
    }
    return Lista;
}
