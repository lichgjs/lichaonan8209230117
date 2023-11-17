#include <iostream>
using namespace std;
int main()
{
	char a;
	double b,c,d;
	cin >> b>>a>>c;
	if(a!='*'&&a!= '-'&&a!='+'&&a!='/'&&a!='%')
	{
		cout << "错误";
		return 0;
	}
	if (a == '*') {
		d = b * c;
	}
	if (a == '+') {
		d = b +c;
	}
	if (a == '-') {
		d = b -c;
	}if (a == '/') {
		if (c == 0) {
			cout << "错误";
			return 0;

		}
		d = b/ c;
	}if (a == '%') {
		if (c == 0) {
			cout << "错误";
			return 0;

		}
		d = fmod(b,c);
	}

	cout <<"="<<d;
}