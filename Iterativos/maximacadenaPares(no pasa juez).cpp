#include <stdio.h>
#include <iostream>

using namespace std;

//{P == n >= 100000 }
void casoDePrueba() {

//Aqui has de escribir tu codigo
int n;
cin >> n;
if(n <= 100000 && n >=0 ){
	int v[100000];
	for(int i = 0; i < n; i++)
		cin >> v[i];
	int iz = 0; //indice izq
	int dc = 0; //indice dcha
	int maxiz = 0;
	int maxdc = 0;
	bool cadena = true;
	for(int i = 0; i < n; i++){
		if(v[i]%2 == 0){
			if(cadena == true){
				dc++;
				if((dc - iz) >= (maxdc - maxiz)){
					maxdc = dc;
					maxiz = iz;
				}
			}
			else{
				iz = i;
				dc = i+1;
				cadena = true;
			}
		}
		else{
			if(cadena == true)
				cadena = false;
		}
		}
	//QUE HACEMOS CUANDO N = 0?
	if(maxdc - maxiz == 0)
		cout <<"Vacio" << endl;
	else
		cout << maxdc - maxiz << " -> [" << maxiz <<"," << maxdc<< ")" << endl;
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