#include <iostream> 
#include "Sales_item.h"

using namespace std;

int main()
{
    int i = 3;
    int *ptr_i = &i;
    *ptr_i = *ptr_i * *ptr_i;
    cout << "i square? " << i;
	

    
	
	cout <<endl<<endl;
	system("pause");
	return 0;
	}
