#include <stdio.h>
#include <iostream>

using namespace std;
int xxx(int a[], int n);


void casoDePrueba() {
//Aqui has de escribir tu codigo
int v[100000];
int n = 0;
int b = 0;
cin >> n;
if(n >= 0 && n < 100000){
	for(int i = 0; i < n; i++){
	cin >> v[i];
}
	b = xxx(v,n);
}
	cout << b << endl;
} // resuelve


//P == { 0 <= n < 100000 ^ longitud(a) >= n}
int xxx(int a[], int n){
int c = 0;
int min = a[n-1];
for(int i = n-2; i >= 0; i--){
	if(a[i] < min)
		min = a[i];
	else if(a[i] > min)
		c++;
		
}
return c;
}
//Q == {c == #}



int main() {
    unsigned int numCasos, i;
    
    cin>> numCasos;
    
    
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
    }
	return 0;

} // main