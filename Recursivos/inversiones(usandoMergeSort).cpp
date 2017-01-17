#include <stdio.h>
#include <iostream>

using namespace std;

void mezcla(int v[], int a, int m, int b, long long int &inv){
	//int u[b-a+1];
	int u[100000];
	int i, j, k;
	int tam_i = m - a + 1;
	for ( k = a; k <= b; k++ )
		u[k-a] = v[k];
	i = 0;
	j = m-a+1;
	k = a;
	while ( (i <= m-a) && (j <= b-a) ) {
		if ( u[i] <= u[j] ){
			v[k] = u[i];
			i = i + 1;
		} else {
			inv += tam_i - i;
			v[k] = u[j];
			j = j + 1;
		}
		k = k + 1;
	}
	while ( i <= m-a ) {
		v[k] = u[i];
		i = i+1;
		k = k+1;
	}
	while ( j <= b-a ) {
		v[k] = u[j];
		j = j+1;
		k = k+1;
	}
	//delete[] u;
}

void inversiones(int v[], int a, int b, long long int &inv){
	int m;
	if(a < b){
		m = (a+b)/2;
		inversiones(v,a,m,inv);
		inversiones(v,m+1,b,inv);
		mezcla(v,a,m,b,inv);
	}
}

void casoDePrueba() {
//Aqui has de escribir tu codigo
	int n;
	int v[100000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	long long int inv = 0; 
	int a = 0;
	int b = n-1;
	inversiones(v,a,b, inv);
	cout << inv << endl;
} // resuelve


int main() {
   int n;
   cin >> n;
   for(int i = 0; i < n; i++)
	   casoDePrueba();
	return 0;

} // main