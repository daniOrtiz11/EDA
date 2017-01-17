#include <stdio.h>
#include <iostream>

using namespace std;

//{P == n >= 100000 }
void casoDePrueba() {

//Aqui has de escribir tu codigo
int centimos;
cin >> centimos;
int dias = 0;
int antesDeAyer = 0;
int ayer = 0;
int acu = 0;
if((centimos >=0) && (centimos <= 1000000000)){
	while(acu < centimos){
		dias++;
		if(dias == 0 || dias == 1){
			if(dias == 0){
				antesDeAyer = 1;
				acu++;
			}
			else{
				ayer = 2;
				acu = acu+2;
			}/*
			acu++;
			antesDeAyer = 1;
			ayer = 1;*/
		}
		else if(dias >=2){
			acu = 2*antesDeAyer + ayer;
			antesDeAyer = ayer;
			ayer = acu;
			}
		}
	cout << dias << endl;
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