#include <iostream>

using namespace std;

int potencia(int, int);

int main(){
    cout<<potencia(2,1)<<endl;
}

int potencia(int base, int pot){
    if(pot == 0) return 1;
    if(pot == 1) return base;

    return base*potencia(base, pot-1);
}
