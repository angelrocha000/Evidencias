#include <iostream>//invierte cadenas
#include<windows.h>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	char cad1[100],cad2[100];
	int i,j,limite;
	cout<<"Dame una cadena : "; 
	gets(cad1);
	limite=strlen(cad1); 
	j=limite-1;
	for(i=0;i<limite;i++)
	{
		cad2[i]=cad1[j]; 
		j--;
	}
	cad2[i]='\0';
	cout<<"\nLa cadena invertida es: ";
	puts(cad2);
	return 0;
}