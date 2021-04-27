#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    int x[10];
    int *p = x;
    cout << sizeof(p) << "\n";                   //输出：8, 64位win10，指针占8个字节
    cout << sizeof(x) / sizeof(*x) << "\n";      //内置数组没有size()成员，本语句是获取数组容量的常规方法
    cout << sizeof(p) / sizeof(*p) << "\n";      //输出：2
    
    cout << "\n\n";
    system("pause");
    return 0;
}