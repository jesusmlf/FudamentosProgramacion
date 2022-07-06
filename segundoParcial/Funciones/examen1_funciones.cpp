//Alumno: Lopez Fabian Jesus Manuel
//Grupo: 1AV1
//Boleta: 2021361112


#include <bits/stdc++.h>

using namespace std;

float vector_u[5];
float vector_v[5];
float operacion = 0;

float *entrada_u(int size_u);
float *entrada_v(int size_v);

float producto_punto(float arreglo_u[],float arreglo_v[], int size_u);

int main (){
	int size_u = 5;
	int size_v = 5;

	cout<<"\n--Ingrese los valores del vector u--"<<endl;
	float *valores_u = entrada_u(size_u);

	cout<<"\n--Ingrese los valores del vector v--"<<endl;
	float *valores_v = entrada_v(size_v);

	float valor_final = producto_punto(valores_u , valores_v,size_u);
	cout<<"El valor de la operacion es: "<<valor_final;
}

float *entrada_u(int size_u){
        float *lista_u = new float[size_u];

	for(int i=0; i<size_u; i++){
                cout<<"Introdice el valor numero "<<i+1<<" del vector u: ";
		cin>>lista_u[i];
	}
	return lista_u;
}

float *entrada_v(int size_v){
	float *lista_v = new float[size_v];
        
	for(int i=0; i<size_v; i++){
                cout<<"Introdice el valor numero "<<i+1<<" del vector v: ";
		cin>>lista_v[i];
	}
	return lista_v;
}

float producto_punto(float arreglo_u[], float arreglo_v[],int size_u){
	for (int i=0;i<size_u;i++){
		operacion = (arreglo_u[i]*arreglo_v[i]) + operacion;
	}
	return operacion;
}
