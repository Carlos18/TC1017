#include <iostream>
using namespace std;

int main()
{
	int x,y,z=0;
	cout <<"Welcome. We will calculate the sum of integers in the range you provide" << endl;
	cout <<"Please give us the lower bound: ";
	cin >> x;
	cout <<"Please give us the upper bound: ";
	cin >> y;

	while (x<=y)
	{
		z=z+x;
		x++;
	}
	cout <<"The sum from 1 to 10 is: " << z << endl;
	return 0;
}
