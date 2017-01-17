#include <stdio.h>
#include <iostream>

using namespace std;

//{P == n >= 0 }
void casoDePrueba() {

//Aqui has de escribir tu codigo
int n = 0;
long long int act;
long long int mayor_actual = 0;
int cont = 0;
cin >> n;
for(int i = 0; i < n; i++){
	cin >> act;
	if(act > mayor_actual){
		mayor_actual = act;
		cont = 1;
	}
	else if(act == mayor_actual)
		cont++;	
}
cout << mayor_actual << " " << cont << endl;

} // resuelve
// Q == {mayor_actual = (max i: o <= i < n: v[i]) ^ cont = (#i : 0<=i<n: v[i] = mayor_actual)}




int main() {
    unsigned int numCasos, i;
    
    cin>> numCasos;
    
    
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
    }
	return 0;

} // main