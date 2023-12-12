
#include <iostream>
using namespace std;
bool bo(bool a) {
	if (a) {
		a = false;
	}
	else {
		a = true;
	}return a;
}
int main()
{
    bool L[100] = {};

	for (int i = 0; i < 100; i++)
	{
		L[i] = false;
	}
	for (int i = 1; i <= 100; i++)
	{
		for (int n = 1; n <= 100; n++) {
			if (n % i == 0) {
				L[n-1]=bo(L[n-1]);
			}
		}

	}
	for (int m = 1; m <= 100; m++) {
		if (L[m-1]) {
			cout << m << ",";
		}
	}
}
