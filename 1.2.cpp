#include<iostream>
using namespace std;
#define PI 3.14
int main() {
	double a, b, c;
	cout << "请输入半径 " << endl;
	cin >> a;
	system("cls");
	cout << "请输入圆锥的高" << endl;
	cin >> b;
	system("cls");
	c = static_cast<double>(1) / 3 * a * a * b * PI;
	cout << "圆锥的体积为" << c << endl;
}