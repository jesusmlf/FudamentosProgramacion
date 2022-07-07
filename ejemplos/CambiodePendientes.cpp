#include <iostream>
using namespace std;

double *signospen(int *y, int *x, int n,double *sig, int ultimoelemento);
void Imprimir(int *y,double *signs,int n,int ultimo);

int main(){
	int CY[]={14,7,1,-14,-15,-3,-11,17,16,9,-5,13,-14,18,12};
	int CX[]={18,14,1,2,-1,19,1,-13,12,3,-7,11,-4,16,1};
	
	double signos[(sizeof(CY)/sizeof(CY[0]))-1];
	double *sig= signospen(CY,CX,0,signos,sizeof(signos)/sizeof(signos[0]));
	Imprimir(CY,sig,0,sizeof(signos)/sizeof(signos[0]));
	return 0;
}


double *signospen(int *y, int *x, int n,double *sign, int ultimoelemento){
	if (n==ultimoelemento){
		return sign;
	}
	else{
        double deno = x[n+1]-x[n];
        double nume = y[n+1]-y[n];
		double Divi=nume/deno;
		if (Divi<0){
			sign[n]=0;
		}
		else{
			sign[n]=1;
		}
		signospen(y,x,n+1,sign,ultimoelemento);
	}
}

void Imprimir(int *y,double *signs,int n,int tam){
	if (n==tam-1){
		return;
	}
	else{
		if(signs[n]!=signs[n+1]){
			cout<<"Hay cambio de pendiente en y="<<y[n+1]<<endl;
		}
		Imprimir(y,signs,n+1,tam);
	}
	
}

