#include <iostream>
using namespace std;

// P == {0 <= n ^ longitud(palabra) >= n}
bool palabraOrdenada(char palabra[], int n){
	bool ord = true;
	int i = 0;
	while(ord == true && i < n-1){
		if(palabra[i] >= palabra[i+1])
			ord = false;
		i++;
	}
	return ord;
}
// Q == {ord = Vi: 0 <= i < n-1: palabra[i] < palabra[i+1]}
bool casoDePrueba(){
	//leer csao de prueba
	char palabra[1000];
	cin.getline(palabra, 1000);
	int tam = 0;
	int i = 0;
	while(palabra[i] != 0){
		tam++;
		i++;
	}
	if(tam == 3 && palabra[0] == 'X' && palabra[1] == 'X' && palabra[2] == 'X') //caso que marca el final
		return false;
	else{
		//codigo principal
		bool ord = palabraOrdenada(palabra, tam);
		if(ord == true)
			cout << "SI" << endl;
		else
			cout << "NO" << endl;
		return true;
	}
}

int main(){
	while(casoDePrueba()){
	}
	return 0;
}