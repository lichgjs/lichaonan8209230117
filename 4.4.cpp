#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;
void merge(const int a1[], int a, const int a2[], int b, int a3[]) {
for (int i = 0; i < a; i++)
	{
		a3[i] = a1[i];
	}
	for (int n = 0; n < b; n++) {
		int d;d = a + n-1;
		a3[d] = a2[n];
	}
	bool o = true;
	do {
			o = false;
		for (int j = 0; j < (a+b); j++)
		{
			int p = j + 1;
			if (a3[j] > a3[p])
			{
				swap(a3[j], a3[p]);
				o = true;
			}
		}
	} while (o);
}
int main()
{
	cout << "enter the list1:" << endl;
	int size1 = 0;
	cin >> size1;
	int* a1 = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		cin >> a1[i];
	}
	cout << "enter the list2:" << endl;
	int size2 = 0;
	cin >> size2;
	int* a2 = new int[size2];
	for (int i = 0; i < size2; i++)
	{
		cin >> a2[i];
	}	
	int size3 = size1 + size2;
	
	int* a3 = new int[size3];
	merge(a1, size1, a2, size2, a3);
	cout << "The new merge is" << endl;
	for (int i = 0; i < size3; i++)
	{
		cout << a3[i+1] << ' ';
	}
}
