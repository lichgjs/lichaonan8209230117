
#include <iostream>
using namespace std;
void se(double*a1);
int main()
{
	double a1[10] = { 0 };
	
	cout << "请输入十个数";
	for (int i = 0; i < 10; i++)
	{
		cin >> a1[i];
	}
	se(a1);
	cout << "排列后的数为";
	for (int i = 0; i < 10; i++)
	{
		cout << a1[i] << ",";
	}
}
void se(double*a1) {
	bool a = true;
	do{
		a = false;
		for (int j = 0; j < 9; j++)
			if (a1[j] > a1[j + 1])
			{
				swap(a1[j], a1[j + 1]);
				a = true;
			}
	} while (a);
}