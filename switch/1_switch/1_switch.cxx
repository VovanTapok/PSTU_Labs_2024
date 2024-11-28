#include <iostream>

using namespace std;

int main()
{
	int a, b, zn;
	cout << "1 chislo" << endl;
	cin >> a;
	cout << "2 chislo" << endl;
	cin >> b;
	
	cout << "1 - +, 2 - -, 3 - *, 4 - /" <<  endl;
	cin >> zn;
	
	switch(zn)
	{
		case 1: cout << (a+b); break;
		case 2: cout << (a-b); break;
		case 3: cout << (a*b); break;
		case 4: cout << (a/b); break;
		default: return 0;
	}
}