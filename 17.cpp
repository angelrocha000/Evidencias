// Programa que obtiene el mayor de tres numeros
#include <windows.h>
#include <iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char cadena[10];
	int len, i;
	cout<<"Dame una palabra en minusculas: ";
	gets(cadena);
	len=strlen(cadena); //obtiene la longitud de la cadena
	for(i=0;i<len;i++)
		cadena[i]=toupper(cadena[i]); //convierte a mayusculas
	cout<<"La cadena en mayusculas es: "<<cadena<<"\n";
	cout<<"Impreson elemento por elemento\n";
	for(int i=0;i<10;i++)
		cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
	return 0;
	
}