#include <iostream> 
using namespace std;

int main()
{
	cout << "����һ������\n";
	
	int val =0, currVal =0;
	
	if (cin >> currVal){
		int n = 1;
		
		while (cin >> val){
			if (val == currVal){
				++n;
			}else{
				cout << currVal << "������" << n << "��\n"; 
				currVal = val;
				n = 1;
			}
		} 
		cout << currVal << "������" << n << "��\n"; 
	}
	return 0;
	}
