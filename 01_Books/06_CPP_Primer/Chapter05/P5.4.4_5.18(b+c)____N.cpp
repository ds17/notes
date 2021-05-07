#include <iostream>

using namespace std;

int get_response();

int main()
{
//b 错误
    do
    {
        /* code */
    } while (int ival = get_response());

 //b 正确
    /*不允许在循环条件内定义变量*/
    int ival;
    do
    {
        ival = get_response();
    } while (ival);

//c 错误
    do
    {
        int val = get_response();
    } while (ival);
    
//c 正确
    /*循环体中的变量必须定义在循环体之外*/
    int ival;
    do
    {
        ival = get_response();
    } while (ival);
    
    
    cout << "\n\n";
    system("pause");
    return 0;
}