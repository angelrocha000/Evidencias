#include<windows.h>
#include<iostream>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x, c=0;
	float sueldo,total;
	char opcion,nombre[10];
	while(c!=0)//La condicion nunca se cumple ¡Cuidado!
	{
		cout<<"Esto nunca se imprime";
		//c=0;
	}
	/*while se puede usar en situaciones en las que se sabe 
	de antemano el numero de vueltas que se habrá de ejecutar,
	y debe constar de inicialización, condición y modificación*/
	x=1;//inicializacion
	while(x<11)//condición
	{
		cout<<x<<"\n";//Imprime una numeracion 1-10
		x++;//variacion
	}
	system("PAUSE");
	//o bien cuando no se sabe cuántas vueltas debe dar
	opcion='s';
	while(opcion=='s' or opcion=='S')
	{
		system("CLS");
		cout<<"Dame tu nombre "; fflush(stdin); gets (nombre);
		cout<<"Dame tu sueldo ";cin>>sueldo;
		total+=sueldo;//es lo mismo que total=total+sueldo;
		printf("Deseas capturar otro empleado <<s/n>>? ");
		cin>>opcion;//variacion
	}
	printf("Total de salarios= $%5.2f\n",total);
	cout<<"Despues de la pausa el programa se cicla\n";
	system("PAUSE");
	//cuidado con poner ; después de un while
	x=0;
	while(x<10);// se cicla
	{
		cout<<x<<"\n";
		x++;
	}
	return 0;
}