#include <iostream> 
using namespace std;

int main()
{
	int sum = 0, value = 0 ;
	while (cin >> value)
		sum += value;
	cout << "所有输入数据之和:" << sum << endl;
	return 0;
	} 
