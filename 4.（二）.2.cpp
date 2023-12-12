#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString) {
	int b = strlen(hexString);
	int i = b - 1;
	int add = 0;
	for (int a = 0; i >= 0; a++, i--) {
		char d = hexString[i];int v = 0;
		if ('0' <= d && d <= '9') {
			v = d-'0';
		}
		else if (d >= 'a' && d <= 'f') {
			v = (d - 'a' + 10);
		}
		else if (d >= 'A' && d <= 'F') {
			v = d + 10 - 'A';
		}
		else { return 'err'; }
		add += v * static_cast<int>(pow(16, a));
	}return add;
}
int main()
{
   
	std::cout << "parseHex:";
	const char* a = "A1";
	cout << a << endl;
	cout << "parseDec:";
	cout << parseHex(a);
}