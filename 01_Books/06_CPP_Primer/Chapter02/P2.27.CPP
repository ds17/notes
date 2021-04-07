#include <iostream> 
#include "Sales_item.h"

using namespace std;

int main()
{

	int i =-1;
    &r = 0;  //错误
    int i2 = 0;
    int *const p2 = &i2; //一个指向非常量对象的常量指针
    const int *const  p3 = &i2; //一个指向常量对象的常量指针
    const int &const r2 = i;
    const int i3 =i, &r = i;
        
	
	cout <<endl<<endl;
	system("pause");
	return 0;
	}
