#include <iostream>

using namespace std;

int imprimir_numeros(int, int);

int main(){
    int limite = 100;
    const int n = 0;
    imprimir_numeros(limite+1,n);
    
}
int imprimir_numeros(int num_limite,int n){
    if(num_limite == 0) return 0;
    
    if(num_limite > n){
        imprimir_numeros(--num_limite, n);
    }
    
    cout<<num_limite<<endl;
    return 0;
}
