#include <windows.h>
#include <iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip = 123;
	int intento;
	cout<<"Teclea tu nip: ";
	cin>>intento;
	if(intento==nip)
	{
		cout<<"**Correcto**";
		cout<<intento<<" es tu nip";
	}
	else
	{
		cout<<"**Incorrecto**";
		intento<nip?cou<<"Demasiado alto":cout<<"Demasiado bajo";
	}
	
	return 0;
}