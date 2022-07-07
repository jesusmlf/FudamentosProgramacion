#include<bits/stdc++.h>
using namespace std;
void binario(int n);
int ingresarNumero();
int main(){
    auto num = ingresarNumero();
    binario(num);
}
int ingresarNumero(){
    int n;
    do{
	cout<<"ingrese el numero: ";
	cin>>n;
	if(n<0){
	    cout<<"numero invalido"<<endl;
	    system("pause");
	    system("cls");
	}
    }
    while(n<0);
    return n;
}
void binario(int n){
    if(n>1){
	binario(n/2);
    }
    cout<<n%2;
}
