#include <iostream> 
#include "Sales_item.h"

using namespace std;

int main()
{
    double pi = 3.14, *ptr_pi = & pi;
    double e =1.34, *ptr_e = &e;
    cout << "before changed, pointer ptr_pi is: " << ptr_pi << endl; 
    cout << "before changed, the value of pointer ptr_pi is: " << *ptr_pi << endl;

    ptr_pi = ptr_e;
    cout << "after change, pointer ptr_pi is: " << ptr_pi << endl;

    *ptr_e = 6.28;
    cout << "after change, the value of ptr_pi is: " << *ptr_pi << endl;


	cout <<endl<<endl;
	system("pause");
	return 0;
	}
