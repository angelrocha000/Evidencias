// Programa que obtiene el mayor de tres numeros
#include <windows.h>
#include <iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, factorial;
	cout<<"Dime un numero para calcular su factorial"
	cin>>factorial;
	cout<<factorial;
	for(x=factorial-1;x>=1;x--){
		cout<<"X"<<x;
		factorial=factorial*x;
	}
	cout<<"="<<factorial;
	return 0;
}