#include <stdio.h>
#include <iostream>

using namespace std;

bool esValida(bool marcas[], int k, int act) {
	bool ok = true;
	if(marcas[act] == true)
		ok = false;
	return ok;
}
bool esSolucion(int k, int m){
	return k == m-1;
}


void trabajos(int sol[], int k, int n, int tiempos[][100], bool marcas[], int &tiempo, int &tiempoMejor, int tiempoMin[]){
	for(int i = 0; i < n; i++){
		sol[k] = i;
		if(esValida(marcas, k, sol[k])){
			tiempo = tiempo + tiempos[k][sol[k]];
			marcas[sol[k]] = true;
			if(esSolucion(k, n)){
				if(tiempo < tiempoMejor)
					tiempoMejor = tiempo;
			}
			else{
				int tiempoEstimado = tiempo + tiempoMin[k];
				if(tiempoEstimado < tiempoMejor)
					trabajos(sol, k + 1, n, tiempos, marcas,tiempo, tiempoMejor, tiempoMin);
			}
				tiempo = tiempo - tiempos[k][sol[k]];
				marcas[sol[k]] = false;
		}
	}
}


void casoDePrueba(int n) {
//Aqui has de escribir tu codigo
	bool marcas[100]; // marcas de los trabajos
	int tiempos[100][100];
	int tiempoMejor = 0;
	int tiempoMin[100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> tiempos[i][j];
			tiempoMejor = tiempoMejor + tiempos[i][j];
			if (j != 0){
			if(tiempos[i][j] <tiempoMin[i])
				tiempoMin[i] = tiempos[i][j];
			}
			else
				tiempoMin[i] = tiempos[i][j];
		}
		marcas[i] = false;
	}
	int sol[21];
	int tiempo = 0;
	trabajos(sol,0,n,tiempos,marcas, tiempo,tiempoMejor, tiempoMin);
	cout << tiempoMejor << endl;
} // resuelve


int main() {
   int n;
   cin >> n;
 while(n!= 0){
	 casoDePrueba(n);
	 cin >> n;
 }

} // main