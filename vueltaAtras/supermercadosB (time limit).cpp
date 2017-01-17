#include <stdio.h>
#include <iostream>

using namespace std;


bool esValida(int marcas[], int k) {
	bool ok = false;
	if(marcas[k] < 3)
		ok = true;
	return ok;
}
bool esSolucion(int k, int p){
	return k == p-1;
}


void supermercado(int sol[], int k, int n, int p, int costes[][25], int contSup[], int minimos[], int sumMinimos[], int &coste, int &costeMejor, bool &haySol){
	for(int i = 0; i < n; i++){
		sol[k] = i;
		if(esValida(contSup, i)){
			coste = coste + costes[i][k];
			contSup[i] = contSup[i]+1;
			if(esSolucion(k, p)){
				if(coste < costeMejor)
					costeMejor = coste;
				haySol = true;
				sumMinimos[k] = minimos[k];
			}
			else{
				sumMinimos[k] = minimos[k] + minimos[k+1];
				int costeEstimado = coste + sumMinimos[k+1]; 
				//if(coste < costeMejor){ //Para apartado A
				if(costeEstimado < costeMejor){
					supermercado(sol, k + 1, n, p, costes, contSup, minimos, sumMinimos, coste, costeMejor,haySol);
					sumMinimos[k] = minimos[k] + minimos[k+1];
				}
			}
				coste = coste - costes[i][k];
				contSup[i] = contSup[i]-1;
		}
	}
}


void casoDePrueba() {
//Aqui has de escribir tu codigo
	int n; //supermercados
	cin >> n;
	int p; //productos
	cin >> p;
	int costes[25][25];
	int minimos[25];
	int contSup[25];
	int sumMinimos[25];
	int maxInt = 2147483647;
	int costeMejor = maxInt;
	for(int i = 0; i < n; i++){
		contSup[i] = 0;
		for(int j = 0; j < p; j++){
			cin >> costes[i][j];
			if(i == 0)
				minimos[j] = costes[i][j];
			else if(costes[i][j] < minimos[j]){
				minimos[j] = costes[i][j];
			}
			sumMinimos[j] = 0;
		}
	}
	//Suma minimos
	/*for(int i = p-2; i >= 0; i--){
		minimos[i] = minimos[i] + minimos[i+1];
	}*/

	int sol[25];
	int coste = 0;
	int k = 0;
	bool haySol = false;
	if(n==0 || p==0){
		cout << 0 << endl;
	}
	else{
	supermercado(sol, k, n, p, costes, contSup, minimos, sumMinimos, coste, costeMejor, haySol);
	if(haySol == true)
		cout << costeMejor << endl;
	else
		cout <<"Sin solucion factible" << endl;
	}
} // resuelve


int main() {
   int n;
   cin >> n;
for(int i = 0; i < n; i++){
	casoDePrueba();
}

} // main