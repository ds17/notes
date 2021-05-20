#include <iostream>
// #include <stdexcept>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;

void error_msg(initializer_list<string> i1)
{
    for (auto beg = i1.begin(); beg != i1.end(); ++beg)
    {
        cout << *beg << " ";
    }
    cout << "\n";
}

void error_msg(int e, initializer_list<string> i1)
{
    cout << "ErrorCode:" << e << "   ";
    for (auto &item : i1 )           //使用引用是为了避免拷贝长字符串，因为无需修改元素，因此定义为常量引用
    {
        cout << item << " ";
    }
}
/*
initializer_list对象的元素永远是常量值，所以不能通过引用去修改;
因此对象比较复杂时，为避免拷贝产生额外开销，使用引用；
又为了避免写出修改该元素的代码而编译器又发现不了，因此声明为常量引用
*/

int main()
{
    string expected, actual;
    expected = "test";
    actual = "falksase";
    if (expected != actual)
        error_msg(42, {"functionX", expected, actual});
    else 
        error_msg(0, {"functionX", "okay"});
    
    cout << "\n\n";
    system("pause");
    return 0;
}