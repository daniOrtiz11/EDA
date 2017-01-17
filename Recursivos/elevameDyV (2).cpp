#include <stdio.h>
#include <iostream>

using namespace std;

/*
 Si n es 0, devolver 1
  Si n es impar, devolver x·((x·x)^n/2)
  Si n es par, devolver ((x·x)^n/2)
*/
int elevame(int x, int n){
	int e;
    if (n==0)
	e = 1;    
    else if (n%2 == 1)
      e =  ((x%31543) * elevame(((x%31543)*(x%31543))%31543, n/2))%31543;
    else 
      e = (elevame(((x%31543)*(x%31543))%31543, n/2))%31543; 
	return e;
}
void casoDePrueba(int x, int n) {
//Aqui has de escribir tu codigo
	int acum = 1;
	//int e = elevame(x,n,0,acum);
	int e = elevame(x,n);
	cout << e << endl;
} // resuelve


int main() {
   int x, n;
   cin >> x;
   cin >> n;
   while(n!=0 || x != 0){
	   casoDePrueba(x, n);
	   cin >> x;
	   cin >> n;
   }
    
	return 0;

} // main