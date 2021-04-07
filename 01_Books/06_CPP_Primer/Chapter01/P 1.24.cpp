#include <iostream> 
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item total, trans;
	
	if (cin >> total){
		while (cin >> trans){
			if (total.isbn() == trans.isbn()){
				total += trans;
			}else{
				cout << "汇总" << total << endl << endl;
				total = trans;
			}
		}
		cout << "汇总" << total << endl << endl;
	}else{
		cout << "输入数据格式不对\n";
	} 
	return 0;
	}
