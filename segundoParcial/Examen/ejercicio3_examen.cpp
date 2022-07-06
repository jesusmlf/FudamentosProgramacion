#include <iostream>
using namespace std;
int SolicitarValor(int);
float *SolicitarDatos();
float Sumar(float *Lista,int Valor);
int main() {
    int constante=SolicitarDatos();
    float *Lista=SolicitarDatos(constante);
    float sumatoria=ObtenerSuma(constante,Lista);
    return 0;
}
int SolicitarDato(){
    int Valor=0;
    cout<<"Ingrese un valor";
    cin>>Valor;
cout<<"Ingrese un valor";
    return Valor;
}
float SolicitarDatos(){
    float Lista=new float[4];
    for (int i=0; i<5; i++) {
    Lista[i]=i;
    }
    return Lista;
}
float Sumar(int constante,float Lista){
    float suma=0;
    for (int i=0; i<constante; i++) {
        suma=Lista[i]+suma;
    }
    return suma;
}