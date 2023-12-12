
#include <iostream>

int main()
{
	int j = 1;
	for (int i = 0; i < 10; i++)
	{
		j = (j + 1)*2;
	}
	std::cout << "猴子摘了" << j << "颗桃子" << std::endl;
}