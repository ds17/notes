#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    string s = "Hello world";

    //控制结构内定义的变量，只能在控制结构内可见
    //变量声明并初始化，和使用放在了一起，，每次使用都被初始化，无法判断
    // while (string::iterator iter != s.end()) 
    // {
    //     /* code */
    // }
    string::iterator iter = s.begin();
    while (iter != s.end())
    {
        ++iter;
        /* code */
    }
    
    


    cout << "\n\n";
    system("pause");
    return 0;
}