#include <windows.h>
#include <iostream>
using namespace std;
//Angel Josue Rocha Adame
//24041225
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip = 123;
	int intento = 0;
	cout<<"Teclea tu nip: ";
	cin>>intento;
	if(intento==nip)
	{
		cout<<"**Corecto**";
	}
	else
	{
		cout<<"**Incorrecto**";
	}
	return 0;
}