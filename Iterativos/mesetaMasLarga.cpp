#include <stdio.h>
#include <iostream>

using namespace std;

//P == {0 <= n <= 100000 ^ longitud(v) >= n}
/*
5 
1000 1200 1200 1200 1000
1 3
*/
void xxx(int v[], int n, int &izq, int &dcha){
	int act = 0;
	int izqAct = 0;
	int dchaAct = 0;
	int i = 0;
	while(i<n){
		if(v[i] == act){
			dchaAct++;
			if(dchaAct - izqAct > dcha - izq){
				izq = izqAct;
				dcha = dchaAct;
			}
		}
		else{
			act = v[i];
			izqAct = i;
			dchaAct = i;
		}
		i++;
	}
}
/*
Q == {0<=izq<=dcha<n ^ Vk: izq<=k<=dcha : v[k] = v[izq]}
*/
/* Invariante
I == {0<=i<=n ^ 0<=izqAct<=dchaAct<=i ^ Vk: izqAct<=k<=dchaAct : v[k] = v[izq] ^ act = v[izqAct] ^ dcha-izq >= dchaAct-izqAct}
*/
/*Funcion de cota
cota = n - i
I ^ ¬B -> cota >= 0
*/
/* Coste asintótico
Lineal. Bucle principal n vueltas
*/

void casoDePrueba() {
	/*
	int n;
	cin >> n;
	int v[100000];
	int aux;
	for(int i = 0; i < n; i++){
		cin >> aux;
		v[i] = aux;
	}
	int pos = 0;
	int sum = 0;
	xxx(t,n,v,pos,sum);
	cout << pos << " " << sum << endl;
	*/
}




int main() {
    int n;
	cin >> n;
	while(n != 0){
	int aux;
	int v[100000];
	for(int i = 0; i < n; i++){
		cin >> aux;
		v[i] = aux;
	}
	int izq = 0;
	int dcha = 0;
	xxx(v,n,izq,dcha);
	cout << izq << " " << dcha << endl;
	cin >> n;
	}
	return 0;
} // main