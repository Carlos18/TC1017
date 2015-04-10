#include <iostream>
using namespace std;
 
int main()
{
	int n, i;
	double fact, e;
 
	e = 1;
	fact = 1;

	cout << "Introduzca la exactitud deseada de e: ";
	cin >> n; 
	i = n;

	while(n > 0)
	{
		fact = fact * n;
		n--;
	}
 
	while (i > 0)
	{
		e = e + 1/fact;
		fact = fact / i;
		i--;
	} 
	cout << "El valor aproximado de e es: " << e << endl;
	return 0;
}

