#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){
    int arr[10] ={};
    int *ptrs[10];  //十个指向int的指针组成的数组
    int (*p_array)[10] = &arr;  //数组arr的指针
    int (&arrRef)[10] = arr; //数组arr的引用
    int *(&array)[10] = ptrs;  //array是数组的引用，该数组含有10个指针， 即 含10个指针的数组的引用

    // int arr2[10] = arr;   //错误：不允许用数组初始化另一个数组，或者所不允许赋值
     

    
    cout << endl << endl;
    system("pause");
    return 0;
}