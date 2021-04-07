#include <iostream>
int main()
{
	std::cout << "输入两个数字：" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << v1 ;
	std::cout << " 和 " ;
	std::cout << v2 ;
	std::cout << " 的乘积是： " ;
	std::cout << v1 * v2 << std::endl;
	/*
	*注释界定符不能嵌套/* 
	*注释嵌套的测试
	*/ 
	return 0;
 } 
