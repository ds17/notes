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
//		cout << "ƽ���ۼ�" << book <<endl;
//	}
	
//	cin >> sum;  //sumֵ��ʼ�������������ĵ�һ��ֵ��ʼ��sum 
//	
//	while (cin >> book) {    //���������ĵڶ�����ʼ�ۼ� 
//		sum+= book;
//	}
//	cout << "ƽ���ۼ�" << sum <<endl;

//1.5.2 ��Ա����
	Sales_item item1, item2;
	cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn()) {
		cout << item1 + item2;
		return 0;
	}else{
		cerr << "ISBN������ͬ\n";
		return -1;
	}


//	return 0;
	}
