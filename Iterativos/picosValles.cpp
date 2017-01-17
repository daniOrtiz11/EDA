#include <stdio.h>
#include <iostream>

using namespace std;

//{P == n >= 1 ^ n <= longitud(v) < 10000}
void casoDePrueba() {

//Aqui has de escribir tu codigo
int v[10000];
int n = 1;
//Rellenamos el vector
cin >> n;
for(int i = 0; i < n; i++){
	cin >> v[i];
}

int p = 0;
int va = 0;
//i = 1 y hasta n - 1 para quitarnos los extremos, ya sabemos de seguro que no pueden ser picos ni valles
for(int i = 1; i < n-1; i++){
	//comprobamos anterior y posterior del actual
	if(v[i] < v[i-1] && v[i] < v[i+1]) 
		va++;
	else if(v[i] > v[i-1] && v[i] > v[i+1])
		p++;
}

cout << p << " " << va << endl;
} // resuelve
// {Q == (p = #w: 1 <= w < n - 1: v[w] > v[w-1] ^ v[w] > v[w+1]) ^ (va = #t: 1 <= t < n - 1: v[t] > v[t-1] ^ v[t] > v[t+1])}




int main() {
    unsigned int numCasos, i;
    
    cin>> numCasos;
    
    
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
    }
	return 0;

} // main