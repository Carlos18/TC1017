#include <iostream>
using namespace std;

long int fibo(int a)
{
	if ((a==1) or (a==2))
	{
		return 1;
	}
	if (a>2)
	{
	return fibo(a-1) + fibo(a-2);
	}
}

int main()
{
	int x;
	cout << "Calculadora de fibonacci" << endl;
	cout << "Ingrese un numero: ";
	cin >> x;
	cout << "El fibonacci de " << x << " es " << fibo(x) << endl;
	return 0;
}

