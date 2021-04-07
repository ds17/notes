#include <iostream>
int main()
{
	int sum = 0, val = 1;
	while (val <= 10) {
		sum += val;
		++val;
	}
	std::cout << "1到10的和是：" << sum << std::endl;
	
	return 0;
	
 } 
