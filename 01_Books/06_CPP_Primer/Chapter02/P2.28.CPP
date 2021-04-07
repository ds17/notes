#include <iostream> 
#include "Sales_item.h"

using namespace std;

int main()
{
    int *p1;
    // int *const p2 ;     //错误：常量需要初始化
    int *const p2 = NULL; //正确

	// const int ic; //错误：常量需要初始化
    const int ic=0 ; //正确
    const int &r = ic;

    // const int *const p3; //错误：常量需要初始化
    const int *const p3 = &ic; //正确

    const int *p; //常量许需要初始化，为什么没报错？？
    
    // p1 = p3; //错误


    
	
	cout <<endl<<endl;
	system("pause");
	return 0;
	}
