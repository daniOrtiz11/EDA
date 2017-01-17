#include <stdio.h>
#include <iostream>

using namespace std;

//V [n] con 0 < n < 90000
int concava(int v[], int i, int j) {
	int med;
	int min;
	if(j-i > 1){
	med = (i+j)/2;
	
	if(v[med] < v[med-1]){
		if(v[med] > v[med+1])
			min = concava(v,med,j);
		else
			min = v[med];
	}
	else if(v[med] > v[med-1]){ //v[med] > v[med-1]
			min = concava(v,i,med);
	}
	}
	else{
		if(v[i] < v[j])
			min = v[i];
		else
			min = v[j];
	}
	return min;
} // resuelve
// {Q == 0 <= k < n ^ Vj : 0 <= j < k : V [j] > V [j + 1] ^ Vl : k + 1 <= l < n : V [l − 1] < V [l])}



void casoDePrueba() {
//Aqui has de escribir tu codigo
int v[90000];
int n = 0;
cin >> n;
for(int i = 0; i < n; i++){
	cin >> v[i];
}
int min = concava(v,0,n-1);
cout << min << endl;
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