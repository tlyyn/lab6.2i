#include <iostream>
using namespace std;
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void Create(int* a, int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand();
}
void Print(int* a, int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << "   ";
	cout << endl;
}

int Sum(int* a, int size) {
	int s = 0;
	int max, min;
	max = a[0];
	min = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	s = (min + max) / 2;
	return s;
}


int main()
{
	srand((unsigned)time(NULL)); 
	int n;
	cout << "n=";cin >> n;
	int* a;
	a = new int[n];

	Create(a, n);
	Print(a, n);
	int sum = Sum(a, n);
	cout << "Sum=" << sum;
	delete[]a;
	return 0;

}
