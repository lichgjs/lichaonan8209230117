
#include <iostream>
using namespace std;
int main()
{
	int a[10] = {};
	cout << "请输入十个数";
	int s = 0;
	
	for (int i = 0; i < 10; i++) {
		 cin >> a[i]; }
	cout << "不重复的数有";
	for (int n = 0; n < 10; n++) {
		for (int c=(n+1); c < 10; c++) {
			if (a[n] == a[c]) {
				++s;
				continue;
			}
		}
	}	for (int i = 0; i < (10-s); i++)
	{

		cout << a[i] << endl;
	}
		
		
		
	
			
	
	
}
