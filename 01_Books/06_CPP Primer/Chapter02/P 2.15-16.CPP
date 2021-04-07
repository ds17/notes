#include <iostream> 
#include "Sales_item.h"
#include <typeinfo>

using namespace std;

int main()
{

	int i = 0, &r1 = i;
	double dd = 0, &r2 = dd;
	r2 = 3.14259;
	// r2 = r1;
	// i =r2;
	dd = r1;


	cout << dd <<endl;
	cout << typeid(dd).name() ;

    
	
	cout <<endl<<endl;
	system("pause");
	return 0;
	}
