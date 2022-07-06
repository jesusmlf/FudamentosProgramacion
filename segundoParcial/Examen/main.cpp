//
//  main.cpp
//  Examen
//
//  Created by Miguel Sanchez Brito on 31/03/22.
//

#include <iostream>
using namespace std;
int *Lista(int *VY, int *VX,int Tamano);
void Imprimir(int *,int *,int *, int);

int main() {

int CY[]={14,7,1,-15,-15,-3,-11,17,16,9,-5,13,-14,18,12};
int CX[]={18,14,1,1,-1,19,1,-13,12,3,-7,11,-4,16,1};
int *Arreglo=Lista(CY,CX,sizeof(CY)/sizeof(CY[0]));
Imprimir(Arreglo,CY,CX,sizeof(CY)/sizeof(CY[0]));
return 0;
}

int *Lista(int *VY, int *VX, int Tamano){
    
    int *Arreglo=new int [Tamano-1];
    
    for (int i=1; i<Tamano; i++) {
        int XF=VX[i];
        int XI=VX[i-1];
        
        int YF=VY[i];
        int YI=VY[i-1];
        
        float Division=(YF-YI)/(XF-XI);
        
        if(Division>=0){
            Arreglo[i-1]=1;
        }
        if(Division<0){
            Arreglo[i-1]=0;
        }
        
        cout<<Arreglo[i-1]<<endl;
    }
    
    return Arreglo;
}

void Imprimir(int *Pendiente,int *CY,int *CX, int Tamano){
    cout<<Tamano<<endl;
    for (int i=1; i<Tamano-1; i++) {
        if(Pendiente[i]!=Pendiente[i-1]){
            cout<<" Cambio: "<<CY[i]<<endl;
        }
    }
}
