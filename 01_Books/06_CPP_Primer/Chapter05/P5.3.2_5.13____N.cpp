#include <iostream>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;
unsigned get_bufCnt();

int main()
{
    unsigned ival = 512, jval = 1024, kval = 4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();

    switch (swt)
    {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;  
        case kval:
            bufsize = kval + sizeof(int);
            break; 
    }

//!错误原因：case标签的内容只能是  整型 常量 表达式
//修改如下：
    const unsigned ival2 = 512, jval2 = 1024, kval2 = 4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();

    switch (swt)
    {
        case ival2:
            bufsize = ival2 * sizeof(int);
            break;
        case jval2:
            bufsize = jval2 * sizeof(int);
            break;  
        case kval2:
            bufsize = kval2 + sizeof(int);
            break; 
    }
    
    cout << "\n\n";
    system("pause");
    return 0;
}