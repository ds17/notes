#include <iostream> 
using namespace std;

int main()
{
	cout << "输入一组数：\n";
	
	int val =0, currVal =0;
	
	if (cin >> currVal){
		int n = 1;
		
		while (cin >> val){
			if (val == currVal){
				++n;
			}else{
				cout << currVal << "出现了" << n << "次\n"; 
				currVal = val;
				n = 1;
			}
		} 
		cout << currVal << "出现了" << n << "次\n"; 
	}
	return 0;
	}
