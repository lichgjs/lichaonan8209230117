#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;
void merge( int a,int *a3) {
	int o = true;
	do {
		o = false;
		for (int j = 0; j < a; j++)
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
	cout << "enter the list length:" ;
	int size3 = 0;
	cin >> size3;
	cout << "enter the list:";
	int* a3 = new int[size3];
	for (int i = 0; i < size3; i++)
	{
		cin >> a3[i];
	}
	merge(  size3, a3);
	cout << "The ip is" << endl;
		for (int i = 0; i < size3; i++) {
		cout<< (a3+i)<<endl;
	}
	cout << "The  ranged list is:";
	for (int i = 0; i < size3; i++)
	{
		cout << a3[i + 1] << ' ' << endl;
	}
		


	delete(a3);
}
