#include <iostream> 
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item currBook, book;
	
	if (cin >> currBook){   
		int n =1;
		while (cin >> book){  //��Ϊ�������ķ�ʽ���벢�����жϣ����ֻ���ж�������ͬ�ģ��������Ļᱻ��ϣ��޷����� 
			if (currBook.isbn() == book.isbn()){
				++n;
			}else{  //�����µ�isbn���벢��ӡ�����ԣ����һ��book�������޷���� 
				cout << currBook.isbn() << "��¼��" << n <<"��\n"; 
				currBook = book;
				n =1;
			}
		}
		cout << currBook.isbn() << "��¼��" << n <<"��\n"; 
	}
	return 0;
	}
