#include <iostream>
using namespace std;

int main()
{
	int x, y;
	char sig;
	cout << "Escribe un numero: ";
	cin >> x;
	cout << "Escribe otro numero: ";
	cin >> y;
	cout << "Que operacion quieres realizar (+, -, *, /): ";
	cin >> sig;
	switch(sig)
		{
			case '+' : cout << "La suma de " << x << " + " << y << " es: " << x + y << endl; break;
                        case '-' : cout << "La resta de " << x << " - " << y << " es: " << x - y << endl; break;
                        case '*' : cout << "La multiplicacion de " << x << " * " << y << " es: " << x * y << endl; break;
                        case '/' : cout << "La division de " << x << " / " << y << " es: " << x / y << endl; break;
			default : cout << "Ese signo no es valido" << endl;
		}
	return 0;
}
