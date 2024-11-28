#include <iostream>

using namespace std;

int main()
{
	int n, a,x,i,z,sp;
	a = 1;
	cin >> n;
	x = 0;
	z = 0;
	while (a <= n)
	{
		sp = 0;
		while (sp < (n-(n-a)))
		{
			cout << ' ';
			sp++;
		}
		i = z;
		while (i < n)
		{
			cout << "*";
			i++;
		}
		cout << endl;
		z++;
		a++;
	}
}