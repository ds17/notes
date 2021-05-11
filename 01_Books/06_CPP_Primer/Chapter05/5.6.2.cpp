#include <iostream>
#include "Sales_item.h"
#include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main()
{
    Sales_item item1, item2;
    // cin >> item1 >> item2;
    // if (item1.isbn() == item2.isbn())
    // {
    //     cout << item1 +item2 << "\n";
    //     system("pause");
    //     return 0;
    // }else
    // {
    //     cerr << "Data must refer to same ISBN \n";
    //     system("pause");
    //     return -1;
    // }

    
    
    while (cin >> item2 >> item2)
    {
        try
        {
            if (item1.isbn() != item2.isbn())
                throw runtime_error("Data must refer to same ISBN \n");  
            cout << item1 + item2 << "\n";
        }
        catch(runtime_error err)
        {
            cout << err.what()   //err是 runtime_error 类型的变量，what() 是类的成员函数
                << "\nTry again? Enter y or n \n" ;
            char c;
            cin >> c;
            if (!cin || c == 'n') break;

        }
    }
    


    cout << "\n\n";
    system("pause");
    return 0;
}

/*
0-201-70353-X 4 24.99 
0-201-82470-1 4 45.39 
0-201-88954-4 2 15.00 
0-201-88954-4 5 12.00 
0-201-88954-4 7 12.00 
0-201-88954-4 2 12.00 
0-399-82477-1 2 45.39 
0-399-82477-1 3 45.39 
0-201-78345-X 3 20.00 
0-201-78345-X 2 25.00
*/