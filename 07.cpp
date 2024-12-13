// Programa que lee un numero e indique si es par o impar
//#include <studio.h>
#include <iostream>
using namespace std;
//Angel Josue Rocha Adame
//24041225
int main(){
	int n;
	cout<<"Dame un numero para determinar si es par o impar: ";
	cin>>n;
	if(n%2)//el resultado es cero y en C, cero=falso
		cout<<"El numero es impar\n";
	else
		cout<<"El numero es par\n";
	system("pause");
	//condicion en forma explicita
	if(n%2==0)
		cout<<"El numero es par\n";
	else
		cout<<"El numero es impar\n";
	return 0;
}