//matriz superdiagonal y subdiagonal en un ciclo
#include <iostream> //#include<stdio.h>
#include<time.h>//random
using namespace std;
// Angel Josue Rocha Adame
// 24041225
main( )
{
	int matriz[10][10];//declara una matriz
	int i,j,n;
	srand(time(0)); // Inicializar la semilla de numeros aleatorios
	do{
		cout<<"Dime cuantos elementos por lado tiene la matriz? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++)//Ciclo para renglones
		for(j=0;j<n;j++)//Ciclo para columnas
			matriz[i][j]=rand()%100; // Genera numero aleatorio entre 0 y 99
	cout<<"Impresion de la matriz\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d",matriz[i][j]);
		cout<<"\n";
	}
	cout<<"Impresion de las matrices superdiagonal y subdiagonal en un ciclo\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
				printf("%3d",matriz[i][j]);
			else
				printf("   ");
		}
		cout<<"\n";
	}
}