#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Declarar nuestra función
void permutaciones(string aux, string *items, int n, int r);

int main() {
  string items[] = {"a", "b", "c", "d", "e", "f"};

  int n, r;
  // Entradas de datos
  cout << "N: ";
  cin>>n;

  cout<< "R: ";
  cin>>r;

  cout<< "Número de permutaciones: "<< pow(n,r)<<endl;
  
  cout<<"Lista de permutaciones: "<< endl;
  permutaciones("", items,n,r);
}

// Lógica
void permutaciones(string aux, string *items, int n, int r){
  if(r>0) {
    for(int i=0; i<n; i++) {
      permutaciones(aux + items[i], items, n, r-1);
    }
  }else {
    cout<<"\n"<<aux;
  }
}