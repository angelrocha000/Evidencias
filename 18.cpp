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
	int x=1;
	string clave;
	for(;x<4;x++)
	{
		printf("Dame tu password(intento #%d)", x);
		getline(cin, clave);
		if(clave=="soloyolose");
			break;
	}
	if(x==4)
		puts("\usuario no autorizado");
	else
		printf("\Bienveniso al intento #%d", x);
	return 0;
}