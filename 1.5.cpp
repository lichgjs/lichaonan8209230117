#include <iostream>
using namespace std;
int main()
{
	double h, s;
	cout << "请输入摄氏度" << endl;
	cin >> h;
	s = (5.0 / 9.0) * (h - 32);
	cout << "摄氏度为" << s<<endl;
}