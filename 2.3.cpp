#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三角形的三条边长";
		cin >> a >> b >> c;
		if (a + b < c || a + c < b || b + c < a) {
			cout << "这不是一个三角形";
			return 0;
		}
		else
		{
	       cout << "三角形的边长为" << (a = b = c);
		}
	
		if (a==b||b==c||a==c) {
			cout << "且该三角形为等腰三角形";
		}
		else {
			cout << "且该三角形不是等腰三角形";
		}
}