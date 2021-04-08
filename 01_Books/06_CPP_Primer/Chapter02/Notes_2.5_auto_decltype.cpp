#include <iostream> 
#include "Sales_item.h"

using namespace std;
int ex_2_36(), c_decltype(), c_auto(), ex_2_37();
int main()
{
    // c_auto();
    // c_decltype();
    // ex_2_36();
    ex_2_37();


    cout <<endl<<endl;
	system("pause");
    return 0;
}

//auto 
int c_auto(){  
	int i = 0, &r =i;
    auto a =r; 
    const int ci = 1, &cr = ci;
    auto b = ci;    //b是一个整数，auto一般会忽略掉顶层const
    auto c = cr;
    auto d = &i;
    auto e = &ci;  //指向常量的指针，底层const保留

    //如果希望推断出一个顶层const，需要明确指出
    const auto f = ci;      //f：const int
    auto &g = ci; //g是一个整型常量引用

    auto k = ci, &l = i; //正确：这里的 auto = int

    //同时auto多个变量是，基本数据类型需一致
    // auto &n = i, *p2 = &ci; //错误：前半部分，需要 auto = int, 后半部分需要 auto  = const int 

    a = 42;
    b = 42;
    c = 42;
    // d = 42;   //错误
    // e = 42;   //错误
    // f = 42;   //错误，f是一个常量
    // g = 42;   //g是一个常量引用 

    return 0;
}


//decltyoe
int c_decltype(){
    const int ci = 0, &cj =ci;
    decltype(ci) x =0;
    decltype(cj) y = x; //y的类型是一个 const int&，而不是一个 cosnt int, y 绑定到 x
    // decltype(cj) z;   //错误： z 的类型是一个 const int& ，是一个引用，需要初始化

    //操作表达式时，返回表达式结果对应的类型
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b; //返回表达式结果对应的类型，r +0 的结果是一个int, b是一个int
    // decltype(*p) c;  //错误：表达式的内容是解引，得到一个引用，c是一个int& 需要初始化
    decltype(p) d;  //正确：d是一个 int*
    
    return 0;
}

//ex 2.36
int ex_2_36(){
    int  a =3, b = -4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;  

    cout << "a=" << a  <<endl;  //输出：4
    return 0;
}

//ex 2.37
int ex_2_37(){
//赋值表达式是一个引用类型
// i 是 int , 那么 表达式“ i= x ” 作为一个整体是一个 int&
    int a =3 , b =4;
    decltype(a) c= a;
    decltype( a = b) d = a; //d是一个引用类型
    ++d;

    cout << d; //输出：4

}