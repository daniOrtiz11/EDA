#include <stdio.h>
#include <iostream>

using namespace std;

bool equilibrio(int v[], int &i, int &sum){
	bool ok = true;
	int pi = v[i];
	int di = v[i+1];
	int pd = v[i+2];
	int dd = v[i+3];
	int eqi, eqd;
	if(pi == 0){
		i = i+4;
		bool oki = equilibrio(v,i,sum);
		if(oki == false)
			ok = false;
		else
			pi = sum;
	}
	if(pd == 0){
		i = i+4;
		bool okd = equilibrio(v,i,sum);
		if(okd == false)
			ok = false;
		else
			pd = sum;
	}
	if(ok == true){
	eqi = pi*di;
	eqd = pd*dd;
	if(eqi != eqd)
		ok = false;
	else{
		sum = pi+pd;
	}
	}
	return ok;
}

void subarbol(int v[], int &i){
	int pi, di, pd, dd;
	cin >> pi;
	cin >> di;
	cin >> pd;
	cin >> dd;
	v[i] = pi;
	i++;
	v[i] = di;
	i++;
	v[i] = pd;
	i++;
	v[i] = dd;
	i++;
	if(pi == 0)
		subarbol(v,i);
	if(pd == 0)
		subarbol(v,i);
}

void casoDePrueba(int pi, int di, int pd, int dd) {
//Aqui has de escribir tu codigo
	int v[10000];
	int i = 0;
	v[i] = pi;
	i++;
	v[i] = di;
	i++;
	v[i] = pd;
	i++;
	v[i] = dd;
	i++;
	if(pi == 0)
		subarbol(v,i);
	if(pd == 0)
		subarbol(v,i);
	i = 0;
	int sum = 0;
	bool e = equilibrio(v,i,sum);
	if(e == true)
		cout << "SI" << endl;
	else
		cout << "NO" << endl;
} // resuelve



int main() {
    int pi, di, pd, dd;
	cin >> pi;
	cin >> di;
	cin >> pd;
	cin >> dd;
	while(pi != 0 || di != 0 || pd != 0 || dd != 0){
	casoDePrueba(pi,di,pd,dd);

	cin >> pi;
	cin >> di;
	cin >> pd;
	cin >> dd;
	}
	return 0;
} // main