#ifndef SALES_DATA_H
#define SALES_DATA_H

//头文件保护符
/*
头文件保护符
依赖于预处理变量，预处理器运行于编译过程之前
预处理变量有两种状态：已定义，未定义
头文件每次被包含，编译器都会把它的代码拷贝过来
拷贝完头文件后，先运行预处理器，
如果头文件是第一次被包含，那么 头文件保护符处于“未定义”状态，预处理器将正常按顺序执行
如果头文件是第二次被包含，那么 头文件保护符处于“已定义”状态，#ifndef为False，编译器会忽略#ifndef 到 #endif之间的部分
*/

#include <string>


struct Sales_data
{
    //头文件中不应使用using声明，因为头文件的内容会被包含到所有引用它的文件中
    //如果引用头文件包含了using声明，会带来不可预料的后果
    std::string bookNo;   
    unsigned int units_sold = 0;
    double revenue = 0;

};

#endif