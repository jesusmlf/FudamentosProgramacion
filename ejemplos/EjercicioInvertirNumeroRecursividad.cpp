#include<iostream>
using namespace std;

void invertir(int num);

int main(){
	int numero;
	cout<<"Ingrese un número entero: ";
	cin>>numero;
	cout<<"\nEl número invertido es: ";
	invertir(numero);
	return 0;
}

void invertir(int num){
	cout<<num%10; //Caso base (num<10)
	if(num>=10){
		invertir(num/10); //Recursividad
	}
}
