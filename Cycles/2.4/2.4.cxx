#include <iostream>

using namespace std;

int main()
{
	int n, a,x,i,z,sp;
	a = 1;
	cin >> n;
	x = 0;
	while (a <= n)
	{
		sp = x;
		while (sp < ((n+1)/2))
		{
			cout << ' ';
			sp++;
		}
		x++;
		z = n - (n-a);
		i = 0;
		while (i < z)
		{
			cout << "*";
			i++;
		}
		cout << endl;
		a++;
		a++;
	}
}