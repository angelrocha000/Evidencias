#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
// Angel Josue Rocha Adame
// 24041225
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x, y;
	float z;
	//Imprime números de 1 en 1 hasta el 100 mientras x<=100, 
	//variación: incrementos de 1 en 1 y 2 en 2
	for(x=100;x>0;x=x-3)
	{
		cout<<x<<", ";
	}
	cout<<"\n";
	system("PAUSE");
	
	for(x=100;x!=65;x-=5)//x=x-5
	{
		z=sqrt(x);
		cout<<"La raíz cuadrada de "<<x<<" es "<<z<<"\n";
	}
	system("PAUSE");

	x=10;
	for(y=10;y!=x;++y)
		cout<<y<<" Dentro del ciclo (nunca entra)\n";
	cout<<y<<" Fuera del ciclo\n";
	system("PAUSE");

	//variaciones del for
	//Se permite el uso de "," para uso de dos o más variables
	// de control.
	for(x=0,y=0;x+y<10;++x)
	{
		cout<<"Dame el valor de y: ";
		cin>>y;
		cout<<x<<"+"<<y<<"="<<x+y<<" El ciclo continúa mientras la suma sea <10\n";
	}	
	cout<<x<<"+"<<y<<"="<<x+y<<" Fuera del ciclo\n";

	//el for puede no tener todas sus partes
	for(x=0;x!=123;)
	{
		cout<<"Dame el valor de x, 123 para terminar el ciclo: ";
		cin>>x;
	}
	system("PAUSE");
	//termina cuando se teclea el 123 en x, no hay variación en la variable de ctrl
	
	//inicialización antes del for
	x=1;
	for(;x<=10;)
	{
		printf("%d\n",x);
		++x;//variacion fuera de la sentencia for pero dentro
		//del cuerpo del ciclo
	}
	system("PAUSE");
	
	//for(;;)//ciclo infinito
	//	printf("Nunca termina\n");
	//bucles for sin cuerpo (retardadores)
	cout<<"Hola mundo\n";
	for(x=0;x<10000000;x++);//el ; hace que el ciclo concluya aquí
		cout<<"Hola mundo después de unos cuantos segundos";//No es parte del ciclo
	return 0;
}