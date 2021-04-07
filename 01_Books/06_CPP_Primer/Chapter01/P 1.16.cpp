#include <iostream> 
using namespace std;

int main()
{
	cout << "输入一组整数：\n";
	int v = 0, sum = 0;
	
	while (cin >> v){
		sum += v;
	}
	
	cout << "一组数的和是：" << sum <<endl;
	return 0;
	}
