#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "�����������ε������߳�";
		cin >> a >> b >> c;
		if (a + b < c || a + c < b || b + c < a) {
			cout << "�ⲻ��һ��������";
			return 0;
		}
		else
		{
	       cout << "�����εı߳�Ϊ" << (a = b = c);
		}
	
		if (a==b||b==c||a==c) {
			cout << "�Ҹ�������Ϊ����������";
		}
		else {
			cout << "�Ҹ������β��ǵ���������";
		}
}