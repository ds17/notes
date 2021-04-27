#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    int x =2, y=3;
    bool someValue = 1;

    someValue ? ++x, ++y : --x ,--y;    // x：2 → 3， y：3 → 4 → 3

    int x =2, y=3;
    //条件运算符优先级高于逗号运算符，上式等价于
    (someValue ? ++x, ++y : --x ) ,--y;
    
    cout << "\n\n";
    system("pause");
    return 0;
}