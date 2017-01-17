#include <stdio.h>
#include <iostream>

using namespace std;


int ingresos_nofinal(int h[], int a, int b, int &i){
	int ingresos = 0;
	if(b != -1){
	if(i != 0){
	i = 2*i;
	ingresos = (h[a] * i) + (h[b] * i);
	}
	else{
	ingresos = (h[a] * 1) + (h[b] * 1);
	i++;
	}
	if (b - a > 1)
		ingresos = ingresos + ingresos_nofinal(h,a+1,b-1,i);
	}
	return ingresos;
}

//{0 ≤ N ≤ 30 ∧ N %2 == 0 ∧ ∀i : 0 ≤ i < N : 0 ≤ h[i] ≤ 10}
void casoDePrueba() {
//Aqui has de escribir tu codigo
	int n;
	cin >> n;
	int h[10000];
	for(int i = 0; i < n; i++){
		cin >> h[i];
	}
	int j = 0;
	cout << ingresos_nofinal(h,0,n-1,j) << endl; //problema al ejecutar: dice que ingresos sin inicializar, posible problema if b - a
} // resuelve
//{s = (Σi : 0 ≤ i < N/2 : h[i] ∗ 2i) + (Σi : N/2 ≤ i < N : h[i] ∗ 2N−i−1)}


int main() {
    unsigned int numCasos, i;
    
    cin>> numCasos;
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
    }
	return 0;

} // main