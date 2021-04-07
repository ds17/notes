#include <iostream> 
#include "Sales_item.h"
using namespace std;

int main()
{
//	Sales_item item1, item2;
//	cin >> item1 >> item2;
//	cout << item1 + item2 << endl;
	
//	Sales_item book, sum;
	
//	while (cin >> book){
//		cout << "平均售价" << book <<endl;
//	}
	
//	cin >> sum;  //sum值初始化：用输入流的第一个值初始化sum 
//	
//	while (cin >> book) {    //从输入流的第二个开始累加 
//		sum+= book;
//	}
//	cout << "平均售价" << sum <<endl;

//1.5.2 成员函数
	Sales_item item1, item2;
	cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn()) {
		cout << item1 + item2;
		return 0;
	}else{
		cerr << "ISBN必须相同\n";
		return -1;
	}


//	return 0;
	}
