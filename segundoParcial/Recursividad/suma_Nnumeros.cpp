#include<iostream>

using namespace std;

int sumaN_numero(int n){
    if (n == 1) return 1;

    return n+sumaN_numero(n-1);
}

int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<sumaN_numero(num);
}