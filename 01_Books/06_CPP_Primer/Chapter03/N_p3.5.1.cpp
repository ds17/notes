#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cstddef>

using namespace std;
// int tex_size();

int main(){
//P3.30
    // unsigned buf_size =10;
    // int ia[buf_size]; //用非常量表达式初始化数组，编译器允许，但在程序运行过程中，buf_size可能会变，因此是不安全的
    // // int ia[4*7-14];      //正确
    // // int ia[tex_size];  //错误
    // // char st[11] = "fundamental";  //错误
    // for (auto a : ia){
    //     cout << a <<endl;
    // }

//P3.32-1 数组实现
    // constexpr size_t array_size = 10;
    // int ia[array_size];
    // for (size_t ix=0; ix <array_size; ++ix){     //下标从零开始
    //     ia[ix] = ix;
    // }

    // // int iab[10] = ia; //错误，数组不能拷贝  也不能把一个数组赋值给另一个数组
    // int ia2[10];
    // for (size_t i =0; i< 10; ++i){       //ia2.size()错误，数组不是类类型，没有成员函数 .size()
    //     ia2[i] = ia[i]; 
    // }    

    // for (auto item :ia2){
    //     cout << item << endl;
    // }

//P3.32-2 vector实现
    // vector<int> ivec1(10,0);
    // for (int i = 0; i <10 ; ++i){
    //     ivec1[i] = i;
    // }

    // vector<int> ivec2 = ivec1;
    // for (auto item : ivec2){
    //     cout << item << endl;
    // }

//P3.33
    unsigned scores[11]= {};  //初始化为0 
    //创建数组时的习惯：初始化为0
    // unsigned scores[11];  //不初始化

    unsigned grade;
    while (cin >> grade)
    {
        if (grade <=100){
            ++scores[grade/10];    //未初始化的化，运行过程中未更新过的值，比如，没有80+分数段的，那该段将是内存原来的垃圾值，可能很大
        }
    }

    for (auto item : scores){
        cout << item << endl;
    }

    cout << endl << endl;
    system("pause");
    return 0;
}

// int tex_size(){
//         return 0;
//     }