#include<iostream>

using namespace std;

float *Lista(int *valoresZ, int *valoresY, int len);

int main(){
    int CoordenadaY[] = {14,7,1,-15,-15,-3,-11,17,16,9,-5,13,-14,18,12};
    int CoordenadaX[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    float *valores_pendientes = Lista(CoordenadaX, CoordenadaY, sizeof(CoordenadaX)/sizeof(CoordenadaX[0]));

    for(int i=0; i<sizeof(CoordenadaX)/sizeof(CoordenadaX[0]); i++){
        cout<<valores_pendientes[i]<<endl;
    }

}

float *Lista(int *valoresX, int *valoresY, int len){
    //Consiste en recibir una lista con los puntos Y en donde se da el cambio de signo en la pendiente.

    float *signos_pendientes = new float[len-1]; //Arreglo donde se almacenaran los cambios de signo en las pendientes.
    
    for(int i=0; i<len-1;i++){
        float pendiente = (valoresY[i+1]-valoresY[i]) / (valoresX[i+1]-valoresX[i]); //Formula pendiente.
        if(pendiente > 0){
            signos_pendientes[i] = 1;
        }
        else{
            signos_pendientes[i] = 0;
        }
    
    }
    return signos_pendientes;
}