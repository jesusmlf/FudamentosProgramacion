#include <iostream>

using namespace std; 

int fibo(int);

int main(){
    cout<<fibo(5);

}

int fibo(int pos){
    if (pos == 0 || pos == 1) return pos;
    if (pos == 1) return 1;

    return fibo(pos-2) + fibo(pos-1);
}
