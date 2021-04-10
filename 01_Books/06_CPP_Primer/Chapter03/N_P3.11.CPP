#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    //3.11
    // const string c_s = "keep out!";
    // for (auto &c :c_s){
    //     c = 'x';                  //错误：c的类型是：常量字符引用，不可以赋值
    // }

    string c_s = "keep out!";
    for (auto &c :c_s){
        c = 'x';                  //正确，c类型： 字符型的引用
    }

    cout << c_s << endl;        //输出：xxxxxxxxx，因为赋值给引用，改变的是其绑定的值



    cout << endl << endl;
    system("pause");
    return 0;
}