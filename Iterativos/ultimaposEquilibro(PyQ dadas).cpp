#include <stdio.h>
#include <iostream>

using namespace std;

//P == {n > 0}
int xxx(int a[], int n){
	int p = -1;
	int n0 = 0;
	int n1 = 0;
	int i = 0;
	while(i < n){
		if(a[i] == 0)
			n0++;
		if(a[i] == 1)
			n1++;
		if(n1 == n0)
			p=i;
		i++;
	}
	return p;
}
/*
Q == {(-1 <= p <n) ^ numUnos(a,p) = numCeros(a,p) ^ Vu : p<u<n : numUnos(a,u) != numCeros(a,u)}
numUnos(a,x) == #u: 0<=u<=x : a[u]=1 
numCeros(a,x) == #u : 0<=u<=x : a[u]=0
*/
/* Invariante
I == {0<=i<=n ^ n0 = numCeros(a,i) ^ n1 = numUnos(a,i) ^ -1<=p<=i ^ Vw : p<w<i : numUnos(a,w) != numCeros(a,w)}
*/
/*Funcion de cota
cota = n - i
I ^ ¬B -> (n - i) >= 0
*/
/* Coste asintótico
Cuerpo del bucle: constante
Bucle: n(i=0,1...n-1) * cuerpo = Ord(n)
*/

void casoDePrueba() {
int n;
int a[100000];
cin >> n;
int aux = 0;
for(int i = 0; i < n; i++){
	cin >> aux;
	a[i] = aux;
}
int p = xxx(a, n);
cout << p << endl;
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