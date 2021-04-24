#include <iostream>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

//输入直到42
int main()
{
// //自己实现的
//     int a;
//     cout << "input a integer: \n";
//     while (cin >> a)
//     {
//         if (a== 42) break;
//         else cout << "input a integer: \n";
//     }
    
//标准答案
    int num;
    while (cin >> num && num !=42)
    {
        cout << "continue to input: \n";
    }


//4.12关系运算符优先级
    int i, j ,k;
    i != j < k;   // < <= > >=的优先级高于 == 和 !=
    i != (j < k); //与上式相同，

    cout << "\n\n";
    system("pause");
    return 0;
}