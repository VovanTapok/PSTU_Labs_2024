#include <iostream>

using namespace std;

int main()
{
	int n, a,i;
	a = 1;
	cin >> n;
	while (a <= n)
	{
		i = 0;
		while (i <= n)
		{
			cout << '*';
			i++;
		}
		cout << endl;
		a++;
	}
}