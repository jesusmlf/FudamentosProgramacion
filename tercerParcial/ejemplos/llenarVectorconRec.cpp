#include <iostream> 
using namespace std;
int *iniciar_arreglo(int *arregloporllenar,int contador,int ultimoindice);

int main(){
	int array[3];
	iniciar_arreglo(array,0,sizeof(array)/sizeof(array[0]));

	for(int i = 0; i <sizeof(array)/sizeof(array[0]); i++){
		cout << array[i] << ' ';
	}
	return 0;
}

int *iniciar_arreglo(int *arregloporllenar,int contador,int ultimoindice){
	if(contador == ultimoindice){
		return arregloporllenar;
	}
	else{
		double numero;
    	cin >> numero;
    	arregloporllenar[contador] = numero;
	    iniciar_arreglo(arregloporllenar,contador+1,ultimoindice);
	}
}

