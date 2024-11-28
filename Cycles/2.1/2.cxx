#include <iostream>

using namespace std;

int main()
{
	int a,n,s;
	a = 1;
	s = 0;
	cin >> n;
	while (a <= n)
	{
		s += a;
		a +=1;
	}
	cout << s;
}