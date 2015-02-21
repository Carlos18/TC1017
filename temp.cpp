#include <iostream>
using namespace std;

int main()
{
	float f,c;
	cout << "Welcome" << endl;
	cout << "Write temperature on farenheit:";
	cin >> f;
	c=5*(f-32)/9;
	cout << "Temperature on celcius:" << c << endl;	
	if (c>=100)
	{
		cout << "Water does boil at this temperature (under typical condition)" << endl;
	}else
	{
		cout << "Water does not boil at this temperature (under typical condition)" << endl;
	}
	return 0;
}
