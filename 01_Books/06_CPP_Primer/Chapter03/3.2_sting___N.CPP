#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string s("some string");
    for (decltype(s.size()) index=0;                   
         index != s.size() && !isspace(s[index]); ++index){     //C++ && 运算符只有在左侧对象为真是，才会检查右侧对象的真假
             s[index] = toupper(s[index]);             //s[index]返回值是该位置上字符的引用
         }

    cout << endl << endl;

    //下标的类型是：string::size_type,可以声明一个下表变量
    string::size_type n;

    system("pause");
    return 0;
}