#include<iostream>
using namespace std;
#define PI 3.14
int main() {
	double a, b, c;
	cout << "������뾶 " << endl;
	cin >> a;
	system("cls");
	cout << "������Բ׶�ĸ�" << endl;
	cin >> b;
	system("cls");
	c = static_cast<double>(1) / 3 * a * a * b * PI;
	cout << "Բ׶�����Ϊ" << c << endl;
}