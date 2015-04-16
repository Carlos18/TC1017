#include <iostream>
using namespace std;

long int superpower (long int a, long int b)
{
  int c,d;
  c = 1;
  d = a;
  while (b>c)
    {
      a = a*d;
      c++;
    }
  return a;
}
int main()
{
	int x,y;
	cout << "Write first value: ";
	cin >> x;
	cout << "Write second value: ";
	cin >> y;
	cout << "Result is: " << superpower(x,y) << endl;
	return 0;
}
