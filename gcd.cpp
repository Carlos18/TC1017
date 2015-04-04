#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	while (1)
	{
		a = a % b;
			if (a == 0)
				return b;
			b = b % a;
		if (b == 0)
			return a;
	}
}

int main()
{
	int x,y;
	cout << "This program calculate de GCD" << endl;
	cout << "Value 1: ";
	cin >> x;
	cout << "Value 2: ";
	cin >> y;
	cout << "The Greatest Common Divisor of " << x << " and " << y << " is " << GCD(x, y) << endl;
	return 0;
}
