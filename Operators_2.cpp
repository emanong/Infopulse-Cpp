#include <iostream>

using namespace std;

int main() 
{
	//--------------------------example 1-----------------------------
	/*int a = 5, b = 2, nRes;
	nRes = a / b;
	cout << nRes << endl;

	double d1 = 5, d2 = 2, dRes;

	nRes = d1 / d2;
	cout << nRes << endl;

	dRes = a / d2; // a - ñîçäàåòñÿ âðåìåííàÿ ïåðåìåííàÿ 5.0
	cout << dRes << endl;

	dRes = (double)a / b; // ÿâíîå ïðèâåäåíèå òèïà (explicit type task)
	cout << dRes << endl;*/

	//--------------------------example 2-----------------------------
	/*for (int i = 0; i < 26; ++i)
	{
		cout << (char)('A' + i) << ' '; // letters
		//cout << ('A' + i) << ' '; // numbers
	}
	cout << endl;*/

	//--------------------------example 3-----------------------------
	/*int a = 5, b(2), c = 3, d = 4, e, f, g, nRes;
	nRes = e = f = g = (a + c) / b + a * d - b + d * (b + c);*/

	//--------------PREINCREMENT--------------
	/*int a = 5;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;*/

	//--------------LOOPS--------------

	//***
	//***
	//***
	/*int nSize;
	cout << "Enter size of the figure: ";
	cin >> nSize;
	for (int i = 0; i < nSize; ++i)
	{
		for (int j = 0; j < nSize; ++j)
		{
			cout << '*';
		}
		cout << endl;
	}*/

	// *
	// **
	// ***
	/*int nSize, symbol = 1;
	cout << "Enter size of the figure: ";
	cin >> nSize;
	for (int i = 0; i < nSize; ++i)
	{
		for (int j = 0; j < symbol; ++j)
		{
			cout << '*';
		}
		++symbol;
		cout << endl;
	}*/

	// ***
	// **
	// *
	/*int nSize;
	cout << "Enter size of the figure: ";
	cin >> nSize;
	int symbol = nSize;
	for (int i = 0; i < nSize; ++i)
	{
		for (int j = 0; j < symbol; ++j)
		{
			cout << '*';
		}
		--symbol;
		cout << endl;
	}*/

	//  ***
	//   **
	//    *
	/*int nSize;
	cout << "Enter size of the figure: ";
	cin >> nSize;

	int nStars = nSize, nSpaces = 1;

	for (int i = 0; i < nSize; ++i)
	{
		for (int j = 0; j < nSpaces; ++j)
		{
			cout << ' ';
		}
		++nSpaces;

		for (int j = 0; j < nStars; ++j)
		{
			cout << '*';
		}
		--nStars;

		cout << endl;
	}*/

	//   *
	//  ***
	// *****
	/*int nSize;
	cout << "Enter size of the figure: ";
	cin >> nSize;

	int nStars = 1, nSpaces = nSize;

	for (int i = 0; i < nSize; ++i)
	{
		for (int j = 0; j < nSpaces; ++j)
		{
			cout << ' ';
		}
		--nSpaces;

		for (int j = 0; j < nStars; ++j)
		{
			cout << '*';
		}
		nStars += 2;

		cout << endl;
	}*/
	

	//***** 1
	//***** 2
	//$$$$$ 3
	//***** 4
	int nCount, nRowSize, nRow = 0, nLine = 0, rowSymbol;
	char cSymbol = '*';
	cout << "Enter number of stars: ";
	cin >> nCount;
	cout << "Enter number of stars in one row: ";
	cin >> nRowSize;
	cout << "Enter the number of line you want to display $ sign: ";
	cin >> rowSymbol;
	for (int i = 0; i < nCount; ++i)
	{
		//cout << '*';
		cout << cSymbol;
		++nRow;
		if (nRow == nRowSize)
		{
			nRow = 0;
			++nLine;
			if ((nLine + 1) % rowSymbol == 0)
			{
				cSymbol = '$';
			}
			else 
			{
				cSymbol = '*';
			}
			cout << ' ' << nLine << endl;
		}
	}
	cout << endl;

	system("pause");
	return 0;
}
