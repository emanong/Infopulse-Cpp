#include <iostream>

using namespace std;

int main()
{
	//example 1
	//cout << "Sept " << 16 << " " << 2017.9 << endl;

	//example 2
	/*int a, b, c; 
	cout << a << endl;*/

	//example 3
	/*int a(5), b = 7, nResult;
	nResult = a + b;
	cout << nResult << endl;*/

	//example 4
	int a, b, nResult;
	char cOper;

	cout << "Enter two numbers and operation sign(+-*/) between\n";
	cout << "Like this: 2 + 3 \n";
	cin >> a >> cOper >> b;

	if (cOper == '+')
	{
		nResult = a + b;
	}
	else if (cOper == '-')
	{
		nResult = a - b;
	}
	else if ('*' == cOper)
	{
		nResult = a * b;
	}
	else if ('/' == cOper)
	{
		nResult = a / b;
	}

	cout << a << ' ' << cOper << ' ' << b << " = " << nResult << endl;

	system("pause"); 
	return 0;
}
