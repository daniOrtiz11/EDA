#include <stdio.h>
#include <iostream>

using namespace std;

//{P == n >= 0 ^ 0 <= longitud(v) < 10000 }
void casoDePrueba() {

//Aqui has de escribir tu codigo
int v[10000];
int n = 0;
cin >> n;
for(int i = 0; i < n; i++){
	cin >> v[i];
}
int cont = 0;
for(int i = 0; i < n; i++){
	if(v[i]%2 == 0)
		cont++;
}
cout << cont << endl;
} // resuelve
// {Q == cont = (#w : 0<=w<n : a[w]%2 = 0)}




int main() {
    unsigned int numCasos, i;
    
    cin>> numCasos;
    
    
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
    }
	return 0;

} // main