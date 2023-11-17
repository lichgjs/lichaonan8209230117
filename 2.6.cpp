#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b,c,d,e;
	cin >> a >> b;
	if (a <= 0 || b <= 0)
	{
		return 0;
	}
	c = a;
	a = (a>b)?a:b;
	b = (c>b)?b:c;
	d = a; e = b;
	while (b != 0) {		
		c = b;
		b = a % b;
		a = c;
	}
	cout << "最大公约数是" << a<< endl;
	cout << "最小公倍数是" <<d*e/a  << endl;
}