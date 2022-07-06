#include <iostream>

using namespace std;

float *CapturarDatos(int);
float ObtenerMedia(float *, int);
float *ValoresMaximoMinimo(float *, int);
float *RestaMedia(float *,float ,int);
float RestaExtremos(float *);
float *Division(float *, float , int);
void Impresion(float *, float *, int);

int main(){
    int num_datos = 10;
    float *datos = CapturarDatos(num_datos);
    float media = ObtenerMedia(datos, num_datos);
    float *max_min = ValoresMaximoMinimo(datos, num_datos);
    float *resta_media = RestaMedia(datos, media, num_datos);
    float resta_extremos = RestaExtremos(max_min);
    float *division = Division(resta_media, resta_extremos, num_datos);
    Impresion(datos, division,num_datos);

    
    //for(int i = 0; i < 5 ; i++){
    //    cout<<resta_media[i]<<endl;
    //}
    
}

float *CapturarDatos(int cantidad){
    //Consiste en capturar una cierta cantidad de datos
    float *vector = new float[cantidad];

    for(int i = 0; i<cantidad; i++){
        cout<<"Ingrese el dato "<<i+1<<" del vector: ";
        cin>>vector[i];
    }
    return vector;
}
float ObtenerMedia(float *vector, int cantidad){
    //Consiste en obtener el promedio de los datos recabados
    float suma = 0;
    float prom = 0;
    for(int i = 0; i<cantidad; i++){
        suma = suma + vector[i];
    }
    prom = suma / cantidad;
    return prom;
}
float *ValoresMaximoMinimo(float *vector, int cantidad) {
    //[maximo,minimo]
    float *maximo_minimo = new float[2];
    float max = 0;
    float min = 0;

    //MAXIMO
    for(int i = 0; i<cantidad ; i++){
        if (i == 0){
            max = vector[i];
        }
        else{
            if (vector[i]>max){
                max = vector[i];
            }
        }
    }
    //MINIMO
    for(int i = 0; i<cantidad ; i++){
        if (i == 0){
            min = vector[i];
        }
        else{
            if (vector[i]<min){
                min = vector[i];
            }
        }
    }
    maximo_minimo[0] = max;
    maximo_minimo[1] = min;
    return maximo_minimo;
}
float *RestaMedia(float *vector, float med, int cantidad){
    //Consiste en restar la media a cada uno de los elementos recabados
    float *res_med = new float[cantidad];

    for(int i=0; i<cantidad; i++){
        res_med[i] = vector[i] - med;
    }
    return res_med;
}

float RestaExtremos(float *vector){
    //Consiste en restal el valor minimo al valor maximo obtenido
    float res = vector[0] - vector[1];
    return res;
}
float *Division(float *vector_media, float extremos, int cantidad){
    //Consiste en dividir los valores obtenidos de RestaMedia entre RestaExtremos
    float *div = new float[cantidad];

    for(int i=0; i<cantidad; i++){
        div[i] = vector_media[i] / extremos;
    }
    return div;
}
void Impresion(float *datos, float *div, int cantidad){
    //Cosiste en imprimir el valor original de cada elemento introducido seguido del valor
    // obtenido de la division.
    cout<<"\nDatos introducidos: "<<endl;
    for(int i=0; i<cantidad; i++){
        cout<<"Valor "<<i+1<<" : "<<datos[i]<<endl;
    }
    cout<<"\nDatos finales: "<<endl;
    for(int i=0; i<cantidad; i++){
        cout<<"Valor "<<i+1<<" : "<<div[i]<<endl;
    }
}