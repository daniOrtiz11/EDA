#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

//
int complementarioFinal(int n, double i, int acu) {
	int c = 9 - n%10;
	int com;
	n = n/10;
	acu = acu + c * pow(10,i);
	if(n > 0){
		com = complementarioFinal(n,i+1,acu);
	}
	else{
		com = acu;
	}
	return com;
} 
// {Q == }

int complementarioNoFinal(int n, double i){

	int c = 9 - n%10;
	int com;
	n = n/10;
	int acu = c * pow(10,i);
	if(n > 0){
		com = complementarioNoFinal(n,i+1) + acu;
	}
	else{
		com = acu;
	}
	return com;
}


void casoDePrueba() {
//Aqui has de escribir tu codigo
int n = 0;
cin >> n;
while (n != -1){
int c = complementarioFinal(n,0,0);
//int c = complementarioNoFinal(n,0);
cout << c << endl;
cin >> n;
}
} // resuelve



int main() {
    /*unsigned int numCasos, i;
    
    cin>> numCasos;
    
    
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
    }*/
	casoDePrueba();
	return 0;

} // main