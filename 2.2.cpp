﻿#include <iostream>
using namespace std;
int main()
{
	double x,y;
	cout << "请输入x" << endl;
	cin >> x;
    if (x <= 0||x>=10)
			cout<<"错误";
	if (x < 1 && x>0) {
		y = 3 - 2*x;
	}
	if (x >= 1 && x < 5) {
		y = 2.0 / 4 * x - 1;
	}
	if (x >= 5 && x < 10) {
		y = x * x;
	}
	cout << "y=" << y << endl;
}  