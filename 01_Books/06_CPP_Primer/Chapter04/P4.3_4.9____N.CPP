#include <iostream>
using namespace std;

int main()
{
    const char *cp = "hello word";   //cp一个指向常量char的指针

    cout << *cp ; //输出字符：h

    system("pause");
    return 0;
}