#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;


int Veces();
void escribir(string frase, int n);

int main(){
    system("Color 0b");
    cout<<"\n\t\t[     RECURSIVIDAD     ]\n";
    cout<<"\t\t------------------------\n\n";
    cout<<" EJERCICIO: Planas "<<endl;
    int n=Veces();
    string f;
    cout << "Escribe una frase. Yo lp repetire las veces que mencionaste." << endl;
    cin>>f;getline(cin, f);
    cout << endl;
    escribir(f,n);
}
int Veces(){
    int v = 0;
    cout << "Cuantas veces quieres repetir tu frase?" << endl;
    cin>>v;
    return v;
}
void escribir(string frase, int n) {
    cout << n << " : " << frase << endl;
    n--;
    if (n>0) escribir(frase,n);
}
