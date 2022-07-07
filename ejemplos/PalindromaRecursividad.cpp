#include <iostream>
#include <string.h>
using namespace std;

bool palindromo(char palabra[],int inicial,int final);

int main(){
	char palabra[50];
	int longitud;
	bool valor;
	cout<<"Ingrese la palabra: ";
	cin.getline(palabra,50); //leer una string o una línea de entrada para almacenarlo en "palabra" con un máximo de 50 caracteres
	longitud=strlen(palabra); //obtiene la longitud real de un arreglo (no cuenta los espacios vacios)
	
	valor=palindromo(palabra,0,longitud-1);
	if(valor==true){
		cout<<"\nLa palabra es palindroma.";
	}
	else{
		cout<<"\nLa palabra no es palindroma.";
	}
	
	return 0;
}

bool palindromo(char palabra[],int inicial,int final){
	if(inicial>=final){
		return true;
	} 
	if(palabra[inicial]==palabra[final]){ //Caso base
		palindromo(palabra,inicial+1,final-1); //Recursividad
	}
	else{
		return false;
	}
}
