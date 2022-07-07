#include <iostream>
using namespace std;

int multiplicacion(int num1,int num2);

int main(){
	int num1,num2;
	cout<<"Introduce el número 1: ";
	cin>>num1;
	cout<<"Introduce el número 2: ";
	cin>>num2;
	int multiplicRecursiva=multiplicacion(num1,num2);
	cout<<"\nLa multiplicacion de los números es: "<<multiplicRecursiva<<endl;
	return 0;
}

int multiplicacion(int num1,int num2){
	if(num1==0 || num2==0){ //Caso base
		return 0;
	}
	if(num1==1){ //Caso base
		return num2;
	}
	if(num2==1){ //Caso base
		return num1;
	}
	else{ //Recursividad
		return num1+multiplicacion(num1,num2-1);
	}
}
