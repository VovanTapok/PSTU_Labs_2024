#include <iostream>

using namespace std;

int main()
{
	int a,n,p;
	a = 1;
	p = 1;
	cin >> n;
	while (a <= n)
	{
		p *= a;
		a +=1;
	}
	cout << p;
}