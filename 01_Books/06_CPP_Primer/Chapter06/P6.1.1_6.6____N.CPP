#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

//局部静态变量
size_t count_calls()
{
    static size_t ctr = 0;  //局部静态变量，用来计数函数被调用的次数，
    return ++ctr;

    //..函数调用完该对象保留，再次调用时，不再初始化，而是使用上次函数运行结束时该对象的值
}

int main()
{
    size_t *p=0;
    for (size_t i = 0; i !=10; ++i)
        cout << count_calls() << "\n";
    
    // cout << "Now, ctr is :" << *p;
    cout << "\n\n";
    system("pause");
    return 0;
}