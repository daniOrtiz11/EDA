#include <iostream>

using namespace std;

/*
Sólo funciona sucesionFinal 
*/
int sucesionNoFinal(int n, int x, int y){
	int r;
	if (n == 0)
		r = x;
	else if (n == 1)
		r = y;
	else if(n == 2)
		r = y + x;
	else if(n==3)
		r = y + x + y;
	else{
		//r = sucesionNoFinal(n - 1, x, y) + sucesionNoFinal(n - 2, x, y);
		int r1 = sucesionNoFinal(n-2,x,y);
		int r2 = r1 + sucesionNoFinal(n-3,x,y);
		r = r1 + r2;
	}
	return r;
}

int sucesionFinal(int n, int i, int v[]){
	int r;
	if (n == 0)
		r = v[0];
	else if (n == 1)
		r = v[1];
	else if (i == n){
		r =  v[i - 1] + v[i - 2];
	}
	else{
		v[i] = v[i - 1] + v[i - 2];
		r =  sucesionFinal(n,i+1,v);
	}
	return r;
}

void casoDePrueba() {
	//Aqui has de escribir tu codigo
	int n = 0;
	cin >> n;
	while (n != -1){
		int x;
		cin >> x;
		int y;
		cin >> y;
		int v[10000];
		v[0] = x;
		v[1] = y;
		int i = 2;
		//int r = sucesionNoFinal(n, x, y);
		int r = sucesionFinal(n, i, v);
		cout << r << endl;
		cin >> n;
	}
} // resuelve



int main() {
	casoDePrueba();
	return 0;

} // main