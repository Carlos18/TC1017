#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

int main()
{
	int x, y;
	cout << "Bienvenido, este programa calcula el maximo comun divisor de dos numeros" << endl;
	cout << "Ingrese el primer numero: ";
	cin >> x;
	cout << "Ingrese el segundo valor: ";
	cin >> y;
	cout << "The greatest common divisor of " << x << " and " << y << " is: " << gcd(x,y) << endl;
	return 0;
}
