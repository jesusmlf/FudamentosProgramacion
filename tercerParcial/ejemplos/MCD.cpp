#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;

int mcd(int a, int b){
    if(b==0) return a;
    else mcd(b,a%b);
}
int main(){
    system("color 0b");
    int a,b;
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" \tEJERCICIO: Calcula el MCD de dos numeros "<<endl;
    cout<<" \tRegla del ejercicio: Solo se usan numeros enteros positivos "<<endl;

    //Validamos que "a" sea positivo y entero
    do{
        cout<<" Ingrese el valor del primer numero: ";
        cin>>a;
        if(a<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(a<0);

    //Validamos que "b" sea positivo y entero
    do{
        cout<<" Ingrese el valor del segundo numero: ";
        cin>>b;
        if(b<0) cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO... \n";
    }while(b<0);

    //si a>b llama a mcd(a,b)
    if(a>b)
        cout<<"\n MCD( "<<a<<" , "<<b<<" ) =  "<<mcd(a,b)<<endl;
    else

        //si b>a llama a mcd(b,a)
        if(a<b)
        cout<<"\n MCD( "<<b<<" , "<<a<<" ) =  "<<mcd(b,a)<<endl;

    return 0;
}