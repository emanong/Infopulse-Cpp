#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

void init(int *pAr, int nSize);
void show(int *pAr, int nSize);
void Sort(int *pAr, int nSize);
void bubbleSortOpt(int *pAr, int nSize);

int main(int argc, char **argv)
{
	//-------example 1-----------
	/*int a = 5;
	cout << a << ' ' << &a << endl;*/

	//-------example 2-----------
	/*const int SIZE = 10;
	int nSize = SIZE;
	int iAr[SIZE] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 }, iAr2[SIZE * 2];

	int *pAr = iAr;
	cout << iAr << ' ' << pAr << endl;

	pAr = iAr2; 
	cout << iAr << ' ' << pAr << endl;*/

	/*cout << iAr << endl;

	for (int i = 0; i < SIZE; ++i)
	{
		cout << i << ' ' << iAr[i] << ' ' << &iAr[i] << endl;
	}*/

	//-------example 3-----------
	/*const int SIZE = 10;
	int nSize = SIZE;
	int iAr[SIZE], iAr2[SIZE * 2];

	init(iAr, nSize);
	init(iAr2, nSize *2);

	show(iAr, nSize);
	show(iAr2, nSize *2);

	Sort(iAr, nSize);
	Sort(iAr2, nSize * 2);

	cout << "Sorted arrays:" << endl;
	show(iAr, nSize);
	show(iAr2, nSize * 2);*/

	//-------example 4-----------
	const int SIZE = 5000;
	int iAr[SIZE], iAr2[SIZE];

	init(iAr, SIZE);
	init(iAr2, SIZE);

	SYSTEMTIME st, st2, st3; // st - system time

	GetLocalTime(&st);
	Sort(iAr, SIZE);
	GetLocalTime(&st2);
	bubbleSortOpt(iAr2, SIZE);
	GetLocalTime(&st3);
	
	cout << st.wHour << ' ' << st.wMinute << ' ' <<  st.wSecond << ' ' << st.wMilliseconds << endl;
	cout << st2.wHour << ' ' << st2.wMinute << ' ' << st2.wSecond << ' ' << st2.wMilliseconds << endl;
	cout << st3.wHour << ' ' << st3.wMinute << ' ' << st3.wSecond << ' ' << st3.wMilliseconds << endl;

	system("pause");
	return 0;
}

void init(int *pAr, int nSize)
{
	for (int i = 0; i < nSize; ++i)
	{
		pAr[i] = rand() % 21;
	}
}

void show(int *pAr, int nSize)
{
	for (int i = 0; i < nSize; ++i)
	{
		cout << setw(3) << pAr[i] << ' ';
	}
	cout << endl;
}

void Sort(int *pAr, int nSize)
{
	int nTemp;

	for (int i = 0; i < nSize - 1; ++i)
	{
		for (int j = 0; j < nSize - 1; ++j)
		{
			if (pAr[j] > pAr[j + 1])
			{
				nTemp = pAr[j + 1];
				pAr[j + 1] = pAr[j];
				pAr[j] = nTemp;
			}
		}
	}
}

void bubbleSortOpt(int *pAr, int nSize)
{
	int nTemp;

	for (int i = 0; i < nSize - 1; ++i)
	{
		for (int j = 0; j < nSize - 1 - i; ++j)
		{
			if (pAr[j] > pAr[j + 1])
			{
				nTemp = pAr[j + 1];
				pAr[j + 1] = pAr[j];
				pAr[j] = nTemp;
			}
		}
	}
}
