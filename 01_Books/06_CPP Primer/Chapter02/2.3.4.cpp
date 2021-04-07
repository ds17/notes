#include <iostream> 
#include "Sales_item.h"

using namespace std;

int main()
{
    // int val =1024;
    // int *p1 = &val;
    // int **ppi = &p1;
    // cout << "the pointer of val is: " << p1 << endl;
    // cout << "the pointer of the val's pointer is: " << ppi << endl;

    // int ***pppi = &ppi;
    // cout << "the pointer of the pointer's pointer is : " << pppi << endl ;


    // cout << "direct value" << val << endl 
    //      << "indirect value" << *p1 << endl
    //      << "double indirect value " << **ppi << endl;

    //指针的引用
    int i = 42, *p = &i;
    int *&r = p; //r是指针p的引用  
    cout << r;   
	
	cout <<endl<<endl;
	system("pause");
	return 0;
	}