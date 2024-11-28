#include <iostream>

using namespace std;

int main()
{
	int n, a,i,x;
	a = 1;
	cin >> n;
	x = n-2;
	while (a <= n)
	{
		if ((a > 1) and (a < n))
		{
			i = 0;
			cout << '*';
			while (i < x)
			{
				cout << ' ';
				i++;
			}
			cout << '*' << endl;
		}
		else
		{
			i = 0;
		    while (i < n)
		    {
			    cout << '*';
			    i++;
	    	}
		    cout << endl;
		}
		a++;
	}
}