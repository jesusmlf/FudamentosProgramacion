#include <iostream>

int arreglo[]={1,2,3,4,5};
int arreglo2[5];
using namespace std;

int main() {
    
    //METER CALIFICACIONES
    for (int i=0; i<size(arreglo2); i++) {
        cout<<"TECLEA LA CALIFICACIÓN: "<<(i+1)<<endl;
        cin>>arreglo2[i];
        }
        
    int i=0;
    while (i<size(arreglo2)) {
        i=i+1;
        i++;
    }
    
    int sumatoria=0;
    for (int i=0; i<size(arreglo2); i++) {
        sumatoria=sumatoria+arreglo2[i];
    }
    
    float promedio=sumatoria/size(arreglo2);
    cout<<"el promedio es: "<<promedio<<endl;
}
