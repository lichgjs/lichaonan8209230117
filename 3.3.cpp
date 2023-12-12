#include <iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1 = 0, side2 = 0, side3 = 0;
	cout << "请输入三角形的三条边长" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		cout << "三角形的面积为" << area(side1, side2, side3);
	}
	else {
		cout << "这三条边不构成三角形" << endl;
	}
}
