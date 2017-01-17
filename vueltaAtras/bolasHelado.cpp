#include <stdio.h>
#include <iostream>

using namespace std;

bool esValida(int s[], int k, int nC, int nV) {
	bool ok = true;
	int iC = 0, iV = 0;
	for(int i = 0; i <= k; i++){
		if(s[i] == 0)
			iC++;
		if(s[i] == 1)
			iV++;
	}
	if(iC > nC || iV > nV)
		ok = false;
	return ok;
}

bool esSolucion(int k, int m){
	return k == m-1;
}

void tratarSolucion(int solucion[], int m,int &cActual,int cTotales){
	for(int i = 0; i < m; i++){
		if(solucion[i] == 0)
		cout<<"C";
		else
		cout<<"V";
	}
	cActual++;
//	if(cActual < cTotales)
	cout << " ";
}
void helados(int solucion[], int k, int n, int bolasC, int bolasV,int &casoAct, int casosTotales){
	for(int bola = 0; bola < n; bola++){
		solucion[k] = bola;
		if(esValida(solucion, k, bolasC, bolasV)){
			if(esSolucion(k, bolasC+bolasV))
				tratarSolucion(solucion,bolasC+bolasV,casoAct, casosTotales);
			else
				helados(solucion, k + 1, n, bolasC, bolasV,casoAct, casosTotales);
		}
	}
}


void casoDePrueba() {
//Aqui has de escribir tu codigo
	int c;
	cin >> c; //0
	int v;
	cin >> v; //1
	int h[15];
	//puede ser 0 1 y 1 0 pero no 0 0 y max 15 en total
	int casosTotales = c+v;
	int casoAct = 0;
	helados(h,0,2,c,v,casoAct, casosTotales);
	cout << endl;
} // resuelve


int main() {
   int n;
   cin >> n;
 for(int i = 0; i < n; i++){
	 casoDePrueba();
 }
	return 0;

} // main