#include <iostream>

using namespace std;

int main()
{
	int a,n,p,s,x,i;
	a = 1;
	p = 1;
	s = 0;
	cin >> n;
	while (a <= n)
	{
		x = 2*a;
		i = a;
		while (i <= x)
		{
			p *= i;
			i++;
		}
		s += p;
		a +=1;
		p = 1;
	}
	cout << s;
}