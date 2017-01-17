#include <stdio.h>
#include <iostream>

using namespace std;

//P == {n > 0 ^ (EXw : 0<=w<n: a[w] > t )}
void xxx(int a[], int n, int t, int &c, int &f){
	 int i = 0;
	 c = 0;
	 f = -1;
	 int cAct;
	 int fAct;
	 int dist = 0;
	 while(i < n){
		 if(a[i] > t){
			if(dist == 0){
				cAct = i;
				fAct = i;
			}
			else{
				fAct = i;
			}
			if(fAct - cAct > f - c){
				c = cAct;
				f = fAct;
			}
			dist++; 
		 }
		 else{
			 dist = 0;
		 }
		 i++;
	 }
}
/*
Q == {0<=c<=f<n ^ f - c = (max k,j:0<=k<=j<n ^ Vq:k<=q<=j: a[q] > t : j-k)}
*/
/* Invariante
I == {0<=i<=n ^ 0<=cAct<=fAct<=i ^ fAct - cAct = (max k,j:0<=k<=j<=i ^ Vq:k<=q<=j: a[q] > t : j-k) ^ f - c >= fAct - cAct}
*/
/*Funcion de cota
cota = n - i
I ^ ¬B -> (n - i) >= 0
*/
/* Coste asintótico
Bucle: n vueltas -> ord(n)
*/

void casoDePrueba() {
int n;
int t;
int a[100000];
cin >> n;
cin >> t;
int aux = 0;
for(int i = 0; i < n; i++){
	cin >> aux;
	a[i] = aux;
}
int c;
int f;
xxx(a, n, t, c, f);
cout << c << " " << f << endl;
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