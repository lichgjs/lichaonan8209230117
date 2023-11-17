#include <iostream>
using namespace std;
int main()
{
	double a = 2; double x,y;
	x = 0;y = 0;
	while (a<100) {
		x =x+ a * 0.8;
		a = a * 2;
		y++;
	}
	cout << "平均每天花费" << x / y;
}