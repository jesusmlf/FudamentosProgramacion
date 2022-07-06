#include <math.h>
#include <iostream>
using namespace std;


int PedirTamano();
float *LLenarVector(int);
float Promedio(float*);
float *Restas(float *,float);
float *Cuadrados(float *);
float Sumatoria(float*);
float Division(float,int);
float CalcularRaiz(float);

int main() {
    int Longitud=PedirTamano();
    float *Vector=LLenarVector(Longitud);    
    float Prom=Promedio(Vector);
    float *Resta=Restas(Vector,Prom);
    float *VecCuadrados=Cuadrados(Resta);
    float sum=Sumatoria(VecCuadrados);
    float Div=Division(sum,Longitud);
    float Raiz=CalcularRaiz(Div);
    cout<<"La SD es "<<Raiz<<endl;
    return 0;
}

int PedirTamano(){
    int i=0;
    cout<<"Digite el tamano del vector: "<<endl;
    cin>>i;
    return i;
}
float *LLenarVector(int tamano){
    float *Arreglo=new float[tamano];
    for (int i=0; i<tamano; i++) {
        cout<<"Ingresa numero: ";
        cin>>Arreglo[i];
    }
    return Arreglo;
}
float Promedio(float* Arr){
    float PromVec=0;
    float suma=0;
    for (int i=0; i<sizeof(*Arr); i++) {
        suma=suma+Arr[i];
    }
    PromVec=suma/sizeof(*Arr);
    return PromVec;
}
float *Restas(float *Arre, float promedio){
    float *Rest=new float[sizeof(*Arre)];
    for (int i=0; i<sizeof(*Arre); i++) {
        Rest[i]=Arre[i]-promedio;
    }
    return Rest;
}
float *Cuadrados(float *Arre){
    float *Arreglo=new float[sizeof(*Arre)];
    for (int i=0; i<sizeof(*Arre); i++) {
        Arreglo[i]=Arre[i]*Arre[i];
    }
    return Arreglo;
}
float Sumatoria(float *Vec){
    float suma=0.0;
    for (int i=0; i<sizeof(*Vec); i++) {
        suma=suma+Vec[i];
    }
    return suma;
}
float Division(float sum,int tamano){
    float Div=0;
    Div=sum/(tamano-1);
    return Div;
}
float CalcularRaiz(float Div){
    float Raiz=0;
    Raiz=pow(Div, 0.5);
    return Raiz;
}
