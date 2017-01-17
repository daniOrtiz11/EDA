#include <stdio.h>
#include <iostream>

using namespace std;

//P == {}
/*
5 5 7 10 0
2 4 4 5 10 10 0
5 10
*/
void copiarV(int comunes[], int &nc, int sol[], int nsol){
	for(int i = 0; i < nsol; i++){
		comunes[i] = sol[i];
	}
	nc = nsol;
}
void xxx(int a[], int na, int b[], int nb, int sol[], int &nsol ){
	int ia = 0;
	int ib = 0;
	int is = 0;
	while(ia < na && ib < nb){
		if(a[ia] > b[ib])
			ib++;
		else if (a[ia] < b[ib])
			ia++;
		else{
			sol[is] = a[ia];
			is++;
			ia++;
			ib++;
		}
	}
	nsol = is;
}
/*
Q == {}
*/
/* Invariante
I == {}
*/
/*Funcion de cota
cota = n - i
I ^ ¬B -> (n - i) >= 0
*/
/* Coste asintótico

*/

void casoDePrueba() {
int n;
cin >> n;
int solucion[10000];
int iS;
iS = 0;
int comunes[10000];
int iC = 0;
int aux;
for(int w = 0; w < n; w++){
cin >> aux;
int i = 0;
int v[10000];
while(aux != 0){
	if(w == 0){
		v[i] = aux;
		comunes[iC] = aux;
		iC++;
		i++;
		cin >> aux;
	}
	else{
		v[i] = aux;
		i++;
		cin >> aux;
	}
}
xxx(v, i,comunes, iC, solucion, iS);
copiarV(comunes, iC, solucion, iS);
}
for(int i = 0; i < iS; i++){
	cout << solucion[i] << " ";
}
cout << endl;
}




int main() {
    unsigned int numCasos, i;

    cin>> numCasos;
    
    
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
 
	}
	return 0;

} // main