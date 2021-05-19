#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main(int argc, char *argv[])    //.. argv首先是一个数组，其次是char *的数组，也就是指向C风格字符串的指针的数组
{
    // string s;
    for (int i = 0; i!=argc; ++i)
    {
        cout << "argv[" << i << "]: " << argv[i] << "\n";    //argv[0]保存程序的名字，可选参数从 argv[1] 开始 
        // s += argv[i];
    }
        
    // cout << s << "\n";
    
    cout << "\n\n";
    system("pause");
    return 0;
}