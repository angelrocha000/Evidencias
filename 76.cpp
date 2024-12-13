#include<iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int potencia(int n, int e);
int main(){
 int num,exponente;
 cout<<"Dame el numero a elevar: "; 	
 cin>>num;
 cout<<"Dame la potencia: "; 	
 cin>>exponente;
 cout<<num<<" elevado a la "<<exponente<<"="<<potencia(num,exponente);
 return 0;
}
int potencia(int n, int e){
	int i=1;
	int resultado=n;
	for(i=1;i<e;i++)
		resultado=resultado*n;
	return resultado;
}