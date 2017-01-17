#include <stdio.h>
#include <iostream>

using namespace std;

struct matriz{
	int pos0; int pos1;
	int pos2; int pos3;
};

matriz vacia(){
	matriz m = {0,0,0,0};
	return m;
}
matriz identidad(){
	matriz m = {1,0,0,1};
	return m;
}
matriz prod(matriz m1, matriz m2){
	matriz mprod;
	/*mprod.pos0 = (((m1.pos0%46337)*(m2.pos0%46337))%46337 + (m1.pos1*(m2.pos2%46337))%46337)%46337;
	mprod.pos1 = (((m1.pos0%46337)*(m2.pos1%46337))%46337 + (m1.pos1*(m2.pos3%46337))%46337)%46337;
	mprod.pos2 = (((m1.pos2%46337)*(m2.pos0%46337))%46337 + (m1.pos3*(m2.pos2%46337))%46337)%46337;
	mprod.pos3 = (((m1.pos2%46337)*(m2.pos1%46337))%46337 + (m1.pos3*(m2.pos3%46337))%46337)%46337;*/
	mprod.pos0 = ((m1.pos0*m2.pos0)%46337 + (m1.pos1*m2.pos2)%46337)%46337;
	mprod.pos1 = ((m1.pos0*m2.pos1)%46337 + (m1.pos1*m2.pos3)%46337)%46337;
	mprod.pos2 = ((m1.pos2*m2.pos0)%46337 + (m1.pos3*m2.pos2)%46337)%46337;
	mprod.pos3 = ((m1.pos2*m2.pos1)%46337 + (m1.pos3*m2.pos3)%46337)%46337;
	return mprod;
}


matriz fibMatriz(matriz orig,int n){
	matriz m;
	 if(n==1)
		m = orig;
	else if(n%2 == 0){
		m = fibMatriz(prod(orig,orig),n/2);
	}
	else if(n%2 == 1){
		m = prod(orig, fibMatriz(prod(orig,orig),n/2));
	}
	return m;
}
void casoDePrueba(int n) {
//Aqui has de escribir tu codigo
	matriz m = {0,1,1,1};
	cout << fibMatriz(m,n).pos1 << endl;
} // resuelve


int main() {
   int n;
   cin >> n;
  // n = n%46337;
   while(n!=0){
	   casoDePrueba(n);
	   cin >> n;
   }
    
	return 0;

} // main