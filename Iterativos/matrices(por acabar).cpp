#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
const int TamFila = 10000;
const int TamCol = 20;
typedef int tMatriz [TamFila][TamCol];


//P == {n>=1 ^ m <= 20 ^ 1<=t<=10}

void rotarFila(tMatriz matriz, int n, int m, int f){

}
void rotarCol(tMatriz matriz, int n, int m, int c){
}
void filas(tMatriz matriz, int n, int m, int a, int b){
}
void columnas(tMatriz matriz, int n, int m, int a, int b){
}
void cruz(tMatriz matriz, int n, int m, int f, int c, int d){

}
/*
Q == {}
*/
/* Invariante
I == {}
*/
/*Funcion de cota
cota = 
I ^ ¬B -> cota >= 0
*/
/* Coste asintótico
O(n*m)
*/

int main() {
	int n = 0;
	cin >> n;
	int m = 0;
	cin >> m;
	while(n != 0 && m != 0){
	int aux;
	tMatriz matriz;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> aux;
			matriz[i][j] = aux;
		}
	}
	int t = 0;
	cin >> t;
	cout << endl;
	string trans;
	for(int i = 0; i < t; i++){
		cin >> trans;
		if(trans == "rotarFila"){
			int f;
			cin >> f;
			rotarFila(matriz,n,m,f);
		}
		else if (trans == "rotarCol"){
			int c;
			cin >> c;
			rotarCol(matriz,n,m,c);
		}
		else if (trans == "filas"){
			int a,b;
			cin >> a;
			cin >> b;
			filas(matriz,n,m,a,b);
		}
		else if (trans == "columnas"){
			int a,b;
			cin >> a;
			cin >> b;
			columnas(matriz,n,m,a,b);
		}
		else if (trans == "cruz"){
			int f,c,d;
			cin >> f;
			cin >> c;
			cin >> d;
			cruz(matriz,n,m,f,c,d);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << matriz[i][j];
		}
		cout << endl;
	}
	cin >> n;
	cin >> m;
	}
	return 0;
} // main