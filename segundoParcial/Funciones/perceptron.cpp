#include <iostream>
#include <string>

using namespace std;

int pedirLongitud();
float *pedirVector1(int);
float *pedirVector2(int);
float *multiplicacionVectores(float *, float *, int);
float sumatoriaMultiplicacion(float *,int);
float adicionarBias(float);
int verificarFuncionActivacion(float);

int main(){
	int size = pedirLongitud();

	cout<<"\n";
	float *arreglo1 = pedirVector1(size);
	cout<<"\n";
	float *arreglo2 = pedirVector2(size);
	
	float *multiplicacion = multiplicacionVectores(arreglo1,arreglo2,size);
	float sumatoria = sumatoriaMultiplicacion(multiplicacion, size);
	
	float adicion = adicionarBias(sumatoria);
	
	cout<<"\nAdicion bias: "<<adicion;
	int resultado = verificarFuncionActivacion(adicion);
	cout<<"\nEl resultado es: "<<resultado<<endl;
}

int pedirLongitud(){
	int longitud = 0;
	cout<<"Ingrese la longitud de los vectores: ";
	cin>>longitud;
	return longitud;
}

float *pedirVector1(int Tvector){
	float *vector1 = new float[Tvector];
	for(int i=0; i<Tvector; i++){
		cout<<"Ingrese el valor "<<i+1<<" del vector 1: ";
		cin>>vector1[i];
	}
	return vector1;
}

float *pedirVector2(int Tvector){
	float *vector2 = new float[Tvector];
	for(int i=0; i<Tvector; i++){
		cout<<"Ingrese el valor "<<i+1<<" del vector 2: ";
		cin>>vector2[i];
	}
	return vector2;
}

float *multiplicacionVectores(float *vector1, float *vector2, int Tvector){
	float *mult = new float[Tvector];
	for(int i = 0; i<Tvector; i++){
		mult[i] = vector1[i] * vector2[i];
	}
	return mult;
}

float sumatoriaMultiplicacion(float *mult,int Tvector){
	float sum = 0;
	for(int i = 0; i<Tvector; i++){
		sum = mult[i] + sum;
	}
	return sum;
}

float adicionarBias(float multi){
	float adicionar = 0;
	float bias = 0.25;
	adicionar = multi + bias;
	return adicionar;
}
int verificarFuncionActivacion(float ad){
	if(ad >= 0){
		return 1;
	}
	else{
		return 0;
	}
}


