// Programa que obtiene el mayor de tres numeros
#include <windows.h>
#include <iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, tabla;
	cout<<"Dame el numero de la tabla que quieres generar: ";
	cin>>tabla;
	for(x=1;x<11;x++){
	
		cout<<tabla<<"X"<<x<<"="<<tabla*x<<"\n";
	}
	for(x=1;x<11;x++){
		printf("%2d X %2d = %3d\n",tabla,x,tabla*x);
	}
	return 0;
}