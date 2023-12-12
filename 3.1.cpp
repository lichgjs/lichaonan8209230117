#include<iostream>
using namespace std;
int ma(int a,int b){
	int c, d, e;
	c = a, d = b;
	if (a < b)
		a = d, b = c;
	while (b > 0) {
		e = b;
		b = a % b;
		a = e;
	}
	return a;
}
int be(int a,int b) {
	return (a * b / ma(a, b));
}
int main() {
	int m = 0, n = 0;
	cout << "请输入m" << endl;
	cin >> m;
	cout << "请输入n" << endl;
	cin >> n;
	if(m<=0||n<=0)
	{
		cout << "请输入自然数" << endl;
		return 0;
	}
	cout << "m,n的最大公约数是" << ma(m, n) << endl;
	cout << "m,n的最小公倍数是" << be(m, n) << endl;
}