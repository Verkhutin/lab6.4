#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void CreateArr(int a[], int n) {
	a[0] = -2;
	a[1] = 0;
	a[2] = 2;
	a[3] = -6;
	a[4] = 8;
	a[5] = 0;
	a[6] = 3;
	a[7] = -9;
	if (n > 8)
		for (int i = 8; i < n; i++)
			a[i] = 0;
}

void PrintArr(int a[], int n) {
	for(int i = 0; i < n; i++)
		cout << "| " << setw(4) << a[i] << " |";
	cout << endl;
}

int Product(int a[], int n) {
	int pr = 1;
	for (int i = 0; i < n; i++)
		if(i % 2 == 0)
		pr *= a[i];
	return pr;
}

int Sum(int a[], int n) {
	int min = n-1, max = 0,s = 0;

	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			max = i;
	
	for (n; n >= 0; n--)
		if (a[n] == 0)
			min = n;

	for (min; min < max; min++)
		s += a[min];

	return s;
}

void Sort(int* a, const int size)
{
	for (int i = 0; i < size - 1; i++) \
	{
		int max = a[i]; 
		int imax = i; 
		for (int j = i + 1; j < size; j++)
			if (max < a[j])
			{
				max = a[j];
				imax = j;
			}
		a[imax] = a[i];
		a[i] = max; 
	}
}



int main() {
	int n;
	cout << "n = "; cin >> n;
	int* p = new int[n];

	CreateArr(p, n);
	cout << "Basic array: " << endl;
	PrintArr(p, n);
	cout << endl;
	cout << "Product = " << Product(p, n) << endl;
	cout << endl;
	cout << "Sum = " << Sum(p, n) << endl;
	cout << endl;
	Sort(p, n);
	cout << "Sorted array: " << endl;
	PrintArr(p, n);
}