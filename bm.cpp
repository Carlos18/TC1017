#include <iostream>
using namespace std;

double sqrt(double number)
{
	double error = 0.0000000001;
	double s = number;
	while((s - number/s) > error)
	{
 		s = (s+ number/s)/2;
 		cout << "Intermediate result: " << s <<endl;
 	}
	return s;
}

int main()
{
	double x;
 	cout << "Welcome, this program calculates de square root" << endl;
	cout << "Write the number: ";
	cin >> x;
 	cout<< "Final result: " << sqrt(x) << endl;
	return 0;
}
