#include <iostream>
#include <stdio.h>

using namespace std;
// Angel Josue Rocha Adame
// 24041225
int factorial(int n);
int main()
{
    int num;
    cout<<"Dime un numero para calcular su factorial: ";
    cin>>num;
    cout<<"El factorial de "<<num<<" es ";
    num=factorial(num);
    cout<<num;
    return 0;
}

int factorial(int n)
{
	if (n==0)
		return 1;
	else
		return n*factorial(n-1);
}