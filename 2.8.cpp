#include <iostream>
#include<iomanip>
using namespace std;
double geng(double a,double x,double x1) {

	while (fabs(x - (1.0 / 2.0) * (x + a / x)) > 1e-5) {
		x1= (1.0 / 2.0) * (x + a / x);
		x = x1;
	}
	return x1;
}
int main()
{	
	double a;
	cout << "a=";
	cin >> a;
	double x, x1; x = a; x1 = 0;
	cout << "a的平方根是" << fixed<<setprecision(3)<<geng(a,x,x1) << endl;
}