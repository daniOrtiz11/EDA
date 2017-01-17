#include <stdio.h>
#include <iostream>

using namespace std;

int base6(int n, int i){
	int resul;
	int c = n/6;
	int r = n%6;
	if(c < 6)
	{
		resul = r*i + c*(10*i);
	}
	else{
		resul = r*i + base6(c,10*i);
	}
	return resul;
}


void casoDePrueba() {
//Aqui has de escribir tu codigo
	int n;
	cin >> n;
	int r = base6(n,1);
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