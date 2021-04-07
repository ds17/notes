#include <iostream> 
#include "Sales_item.h"

using namespace std;

int main()
{

	int ival = 1024;
    int &refVal = ival;
    // int &refVal2;
    refVal = 2;
    cout << ival;

    
	
	cout <<endl<<endl;
	system("pause");
	return 0;
	}
