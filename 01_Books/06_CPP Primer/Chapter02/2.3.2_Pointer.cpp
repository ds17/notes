#include <iostream> 
#include "Sales_item.h"
#include <cstdlib>

using namespace std;

int main()
{
    // int ival = 42;
    // // int *p = &ival;
    // // cout << p;
    // cout << &ival;

    // double dval;
    // double *pd = &dval;
    // double *pd2 = pd;
    // cout << "point1 is: " << pd << endl;
    // cout << "pointer 2 is: " << pd2 << endl;

    // double *pd3;
    // cout << "pointer3 is :" << pd3 ;

    //解引符号
    // int ival = 42;
    // int *p = &ival;
    // *p = 22;
    // cout << p << "in the address, value:" << *p;
	
    //空指针
    int ss = 0;
    int *p1 = &ss;
    // int *p2 = 0; //直接将p2初始化为字面常量0
    // int *p3 = NULL; //首选需要#include cstdlib
    int *p2 = nullptr;
    

    cout << (p1 == p2) ;

	cout <<endl<<endl;
	system("pause");
	return 0;
	}
