#include <stdio.h>
#include <iostream>

using namespace std;

int maximo(int v[], int a, int b, int maxAcum){
	int max;
	if(v[a] > maxAcum)
			maxAcum = v[a];
	if(a >= b-1)
		max =  maxAcum;
	else
		max = maximo(v,a+1,b,maxAcum);
	
	return max;
}

int minimo(int v[], int a, int b, int minAcum){
	int min;
	if(v[a] < minAcum)
			minAcum = v[a];
	if(a >= b-1)
		min =  minAcum;
	else{
		min = minimo(v,a+1,b,minAcum);
	}
	return min;
}

bool parcialOrdenado(int v[], int a, int b){
	bool ok = true;
	int m = (b+a)/2;
	int maxDerecha = maximo(v,m,b,v[m]);
	int maxIzquierda = maximo(v,a,m,v[a]);
	if(maxDerecha < maxIzquierda)
		ok = false;
	int minIzquierda = minimo(v,a,m,v[a]);
	int minDerecha = minimo(v,m,b,v[m]);
	if(minIzquierda > minDerecha)
		ok = false;
	if(ok == true && b-1 > m){
		bool ok1 = parcialOrdenado(v,a,m);
		bool ok2 = parcialOrdenado(v,m,b);
		if(ok1 == false || ok2 == false)
			ok = false;
	}
	return ok;
}

void casoDePrueba(int n) {
//Aqui has de escribir tu codigo
	int v[10000];
	int i = 0;
	v[i] = n;
	i++;
	int aux;
	cin >> aux;
	while(aux!= 0){
		v[i] = aux;
		i++;
		cin >> aux;
	}
	bool ok = parcialOrdenado(v, 0, i);
	if(ok == true)
		cout << "SI" << endl;
	else
		cout << "NO" << endl;
} // resuelve


int main() {
   int n;
   cin >> n;
   while(n!=0){
	   casoDePrueba(n);
	   cin >> n;
   }
	return 0;

} // main