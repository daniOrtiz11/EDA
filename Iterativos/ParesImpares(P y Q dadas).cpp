#include <stdio.h>
#include <iostream>

using namespace std;
void xxx(int v[], int n, bool &b, int &p);
//proc paresImpares(int v[], int n, E/S bool existe, E/S int p)


void casoDePrueba() {
	//Aqui has de escribir tu codigo
	int v[10000];
	int n = 0;
	bool b = false;
	cin >> n;
	int p = n;
	if (n >= 0 && n <= 10000){
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}
		xxx(v, n, b, p);
	}
	if (b == false)
		cout << "No" << "\n";
	else{
		cout << "Si " << p << "\n";
	}
} // resuelve


//P = {0 <= n <= 10000 ^ longitud(a) >= n}
void xxx(int v[], int n, bool &b, int &p){
	bool cambio = false;
	int i = 0;
	if (n < 1)
		b = true;
	else
		b = true;
	while (i < n && b == true){
		if (v[i] % 2 == 1 && i == 0) //primer elemento impar implica falso
		{	b = true;
		cambio = true;
		p = 0;
	}
		
		else if (v[i] % 2 == 1 && cambio == false){ //ha pasado de pares a impares
			cambio = true;
			p = i;
		}
		else if (v[i] % 2 == 0 && cambio == true){ //entra un par despúes de estar con impares
			b = false;
		}
		else if (v[i] % 2 == 0 && cambio == false && i == n-1){ //entra un par despúes de estar con impares
			b = true;
			p = n;
		}
		i++;
	}
}
/*Q = {existe = (EXq : 0 <= q <= n : pares(v, 0, q) ^ impares(v, q, n))^
existe => (0 <= p <= n ^ pares(v, 0, p) ^ impares(v, p, n))}
pares(v, s, t) = Vj : s <= j < t : v[j]%2 = 0
impares(v, s, t) = Vi : s <= i < t : v[i]%2 != 0
*/
/*
Si son todos pares, tiene que devoolver true y p = n
si son todos impares, true y p = primer impar (0)
*/

int main() {
	unsigned int numCasos, i;

	cin >> numCasos;


	for (i = 0; i < numCasos; ++i)
	{
		casoDePrueba();
	}
	return 0;

} // main