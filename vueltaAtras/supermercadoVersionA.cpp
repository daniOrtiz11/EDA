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


void supermercado(int sol[], int k, int n, int p, int costes[][50], int contSup[], int minimos[], int &coste, int &costeMejor, bool &haySol){
	for(int i = 0; i < n; i++){
		sol[k] = i;
		if(esValida(contSup, i)){
			coste = coste + costes[i][k];
			contSup[i] = contSup[i]+1;
			if(esSolucion(k, p)){
				if(coste < costeMejor)
					costeMejor = coste;
				haySol = true;
			}
			else{
				int costeEstimado = coste + (p-k-1)*minimos[i]; //ARREGLAR PARA B
				if(coste < costeMejor)
					supermercado(sol, k + 1, n, p, costes, contSup, minimos, coste, costeMejor,haySol);
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
	int costes[50][50];
	int minimos[50];
	int contSup[50];
	int maxInt = 2147483647;
	int costeMejor = 2147483647;
	for(int i = 0; i < n; i++){
		contSup[i] = 0;
		for(int j = 0; j < p; j++){
			cin >> costes[i][j];
			if(j == 0)
				minimos[i] = costes[i][j];
			else if(costes[i][j] < minimos[i]){
				minimos[i] = costes[i][j];
			}
		}
	}
	int sol[50];
	int coste = 0;
	int k = 0;
	bool haySol = false;
	if(n==0 || p==0){
		cout << 0 << endl;
	}
	else{
	supermercado(sol, k, n, p, costes, contSup, minimos, coste, costeMejor, haySol);
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