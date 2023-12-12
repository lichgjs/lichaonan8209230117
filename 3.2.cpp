#include <iostream>
using namespace std;
int ma(int a, int b) {
	int c, d, e;
	c = a, d = b;
	if (a < b)
		a = d, b = c;
	while (b > 0) {
		e = b;
		b = a % b;
		a = e;

		
	}return a;
}
bool is_prime(int num);
int main()
{	int i = 1;
	for (int j = 0; j < 200;) {
	 i++;
		if (is_prime(i)) {
			cout << i<<'\t'; j++;
		if(j%10==0){
			cout << endl;
		}
		}
		
	 }
}
bool is_prime(int num) {
	int k = num-1;
	for (;k>1 ; ) {
			if (ma(num,k) == 1) {
			k--;
		}
			else {
				return 0;
			}
	}
	return 1;
}
