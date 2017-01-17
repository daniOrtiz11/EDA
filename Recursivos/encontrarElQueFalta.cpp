#include <stdio.h>
#include <iostream>

using namespace std;

int fuga(int v[], int n, int i){
	int p;
	if(n-i == 1){
		p = v[i]-1;
	}
	else{
		if(v[i] > v[i-1]+1)
			p = v[i]-1;
		else if(v[i] < v[i+1]-1)
			p = v[i]+1;
		else
			p = fuga(v,n,i+1);
	}
	return p;
}
/*
Coste: Ord(n)
*/
void casoDePrueba() {
//Aqui has de escribir tu codigo
int v[10000];
int n1, n2;
cin >> n1;
cin >> n2;
int n = n2-n1;
for(int i = 0; i < n; i++){
	cin >> v[i];
}
int i = 1;
int preso = fuga(v,n,i);
cout << preso << endl;
} // resuelve



int main() {
    unsigned int numCasos, i;
    
    cin>> numCasos;
    
    
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
    }
	return 0;

} // main