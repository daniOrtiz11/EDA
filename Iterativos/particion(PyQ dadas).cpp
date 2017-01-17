#include <stdio.h>
#include <iostream>

using namespace std;
bool xxx(int a[], int n, int p);

//P == {0 < n < 10000 ^ 0 <= p < n}
void casoDePrueba() {
//Aqui has de escribir tu codigo
int v[10000];
int n = 1;
cin >> n;
int p = 0;
cin >> p;
if((p >= 0 && p < n)  && (n > 0 && n < 10000)){
	for(int i = 0; i < n; i++){
	cin >> v[i];
}
	bool b = xxx(v,n,p);
	if(b == true)
		cout << "SI" << endl;
	else
		cout << "NO" << endl;
}
else
cout << "error" << endl;
} // resuelve
//Q == {b = Vu,w:0<=u<=p<w<n : a[u] < a[w]}

bool xxx(int a[], int n, int p){
bool b = true;
int maxizq = a[0];
for(int i = 0; i < n; i++){
	if(i <= p){
		if(a[i] > maxizq)
			maxizq = a[i];
	}
	else{
		if(maxizq >= a[i])
			b = false;
	}
}
return b;
}




int main() {
    unsigned int numCasos, i;
    
    cin>> numCasos;
    
    
    for(i = 0; i < numCasos; ++i)
    {
        casoDePrueba();
    }
	return 0;

} // main