#include <stdio.h>
#include <iostream>

using namespace std;


int bongo(int v[], int n, int c, int i){
	int r;
	int act = c + i;
	if(i == n)
		r = -1;
	else if(v[i] == act)
		r = act;
	else
		r = bongo(v,n,c,i+1);
	return r;
}


void casoDePrueba() {
//Aqui has de escribir tu codigo
	int n;
	cin >> n;
	int c;
	cin >> c;
	int v[10000];
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	int r = bongo(v,n,c,0);
	if(r == -1)
	cout << "NO" << endl;
	else
	cout << r << endl;
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