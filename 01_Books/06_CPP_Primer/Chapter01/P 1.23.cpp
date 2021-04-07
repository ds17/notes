#include <iostream> 
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item currBook, book;
	
	if (cin >> currBook){   
		int n =1;
		while (cin >> book){  //因为是以流的方式输入并进行判断，因此只能判断连续相同的，不连续的会被打断，无法遍历 
			if (currBook.isbn() == book.isbn()){
				++n;
			}else{  //出现新的isbn跳入并打印，所以，最后一个book的数量无法输出 
				cout << currBook.isbn() << "记录了" << n <<"条\n"; 
				currBook = book;
				n =1;
			}
		}
		cout << currBook.isbn() << "记录了" << n <<"条\n"; 
	}
	return 0;
	}
