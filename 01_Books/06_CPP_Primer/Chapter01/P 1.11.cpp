#include <iostream>
int main()
{
	std::cout << "输入两个整数:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	if (v1 < v2) {
		int temp = v1;
		v1 = v2;
		v2 = temp;		
	}

	while (v2 <= v1) {
		std::cout << v2 << std::endl;
		++v2;
	}

	return 0;
	}