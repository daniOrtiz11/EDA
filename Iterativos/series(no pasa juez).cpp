#include <stdio.h>
#include <iostream>

using namespace std;

//{P == n >= 0 }
void casoDePrueba() {

//Aqui has de escribir tu codigo
int n = 0;
int x = 0;
cin >> x;
cin >> n;
if(x >=1 && x <= 100 && n >= 0 && n <= 1000000){
int resul = 1;
int p = 1;
for(int i = 1; i <= n; i++){
	p = x*p;
	resul = resul + p;
}
cout << resul%1000007 << endl;
}
} // resuelve
// Q == {}




int main() {
    unsigned int numCasos, i;

    cin>> numCasos;
    
    
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
 
	}
	return 0;

} // main