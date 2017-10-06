#include <iostream>
#include <iomanip>
#include <ctime>
#include <conio.h>

using namespace std;

//int a; // global variable

int main()
{
	/*cout << a; // working 
	int a = 1;
	cout << a; 
	{
		int a = 2;
		cout << a << ' ' << ::a;
	}*/

	// variables go in STACK
	/*int b = 1;
	if (b == 1)
	{
		int d = 2;
		char c;
	}*/

	// getting ASCII code of key 
	/*int a = 5;
	while (a != 27)
	{
		a = _getch();
		cout << a << endl;
	}*/
	
	//   *
	//  ***
	// *****
	//  ***
	//   *
	/*int nSize;
	cout << "Enter size of the figure: ";
	cin >> nSize;
	
	int nHeight = nSize * 2 - 1;
	int nSpaces = nSize, nStars = 1;
	
	for (int i = 0; i < nHeight; ++i)
	{
		for (int j = 0; j < nSpaces; ++j)
		{
			cout << ' ';
		}

		for (int j = 0; j < nStars; ++j)
		{
			cout << '*';
		}

		if (i < nHeight / 2)
		{
			nSpaces--;
			nStars += 2;
		}

		else
		{
			++nSpaces;
			nStars -= 2;
		}

		cout << endl;
	}*/
	
	const int SIZE = 20;
	int iAr[SIZE];

	// filling array with random numbers
	srand((unsigned int)time(0));
	for (int i = 0; i < SIZE; ++i)
	{
		iAr[i] = rand() % 21;
	}

	// printing array on screen
	for (int i = 0; i < SIZE; ++i)
	{
		cout << setw(3) << iAr[i] << ' ';
	}
	cout << endl;

	// finding and printing minimum element
	int nMin = iAr[0];
	for (int i = 1; i < SIZE; ++i)
	{
		if (iAr[i] < nMin)
		{
			nMin = iAr[i];
		}
	}
	cout << "Minimum element:" << nMin << endl;

	// finding and printing sum of even numbers
	int nCount = 0, nSum = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		if (iAr[i] % 2 == 0 && iAr[i] != 0)
		{
			++nCount;
			nSum += iAr[i];
		}
	}
	cout << "Sum of " << nCount << " even elements = " << nSum << endl;

	system("pause");
	return 0;
}
