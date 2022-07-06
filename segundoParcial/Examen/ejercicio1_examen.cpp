//Ejercicio 1
//Alumno: López Fabián Jesús Manuel
//Grupo: 1AV1
//Bolera: 2021361112
#include <iostream>

using namespace std;

float *CapturarDatos(int);
float ObtenerMedia(float *, int);
float *ValoresMaximoMinimo(float *,int);
float *RestaMedia(float *, float ,int);
float RestaExtremos(float *);
float *Division(float *,float, int);
int Impresion(float *, float *, int);


int main(){
    float *datos = CapturarDatos(10);
    for(int i = 0; i<10;i++){
        //cout<<datos[i];
    }
    float media = ObtenerMedia(datos, 10);

    float *resmedia = RestaMedia(datos,media, 10);
        for(int i = 0; i<10;i++){
        //cout<<resmedia[i];
    }
    float *max_min = ValoresMaximoMinimo(datos,10);
    //cout<<max_min[0]<<endl;
    //cout<<max_min[1]<<endl;
    float r_extremos = RestaExtremos(max_min);
    //cout<<r_extremos;
    float *d = Division(resmedia,r_extremos,10);
    int imprimir = Impresion(datos, d ,10);
    }



float *CapturarDatos(int cantidad){
    float *data = new float [cantidad];
    for(int i = 0; i < cantidad;i++){
        cout<<"Ingrese el valor "<<i+1<<" : ";
        cin>>data[i];
    }
    return data;
}

float ObtenerMedia(float *vector, int cantidad){
    float med = 0;
    for(int i = 0; i < cantidad;i++){
        med = vector[i] + med;
    }
    med = med/cantidad;
    return med;
}

float *ValoresMaximoMinimo(float *vector, int cantidad){
    float *valores = new float [2];
    float max;
    float min;
    for (int i = 0; i<cantidad; i++){
        if (i == 0 || max < vector[i]){
            max = vector[i];
        }
    }
    for (int j = 0; j<cantidad; j++){
        if (j == 0 || min > vector[j]){
            min = vector[j];
        }
    }
    valores[0] = max;
    valores[1] = min;
    return valores;
}

float *RestaMedia(float *vector, float med,int cantidad){
    float *res = new float [cantidad];
    for(int i = 0; i<cantidad; i++){
        res[i] = vector[i]-med;
    }
    return res;
}
float RestaExtremos(float *vector){
    float r = 0;
    r = vector[0] - vector[1];
    return r;
}
float *Division(float *vector,float resta, int cantidad){
    float *div = new float [cantidad];
    for(int i = 0; i<cantidad; i++){
        div[i] = vector[i]/resta;
    }
    return div;
}
int Impresion(float *vector, float *division, int cantidad){
    cout<<"Datos originales: "<<endl;
    for(int i = 0; i < cantidad; i++){
        cout<<"\t"<<vector[i]<<endl;
    }
    cout<<"Datos obtenidos: "<<endl;

    for(int i = 0; i <cantidad; i++){
        cout<<"\t"<<division[i]<<endl;
    }

    return 0;
}