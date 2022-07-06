include <iostream>

using namespace std;

float *maximo_minimo(float *);

int main(){
	float arr[] = {1,2,3,4,5,6};
	//cout<<"Tamaño vector: "<<sizeof(arr)/sizeof(float)<<endl;
	//cout<<largo_vector(arr);
	float *arreglo = maximo_minimo(arr);
	cout<<"Maximo = "<<arreglo[0]<<endl;
	cout<<"Minimo = "<<arreglo[1]<<endl;

}

float *maximo_minimo(float *vector){
	//max_min = [max, min]
	float *max_min = new float[6];
	
	float max = 0;
	float min = 0;

	for(int i = 0; i<6; i++){
		if (i == 0){
			max = vector[i];
		}
		else{
			if (vector[i]>max){
				max = vector[i];
			}
		}
	}

	for(int i = 0; i < 6; i++){
		if (i == 0){
			min = vector[i];
		}
		else{
			if (vector[i]<min){
				min = vector[i];
			}
		}
	}
	max_min[0] = max;
	max_min[1] = min;
	return max_min;
}

