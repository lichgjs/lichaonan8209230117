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
	cout << "������m" << endl;
	cin >> m;
	cout << "������n" << endl;
	cin >> n;
	if(m<=0||n<=0)
	{
		cout << "��������Ȼ��" << endl;
		return 0;
	}
	cout << "m,n�����Լ����" << ma(m, n) << endl;
	cout << "m,n����С��������" << be(m, n) << endl;
}