#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <iterator>

using namespace std;

int main(){

//编译器自动将用到数组的地方替换为一个指向数组首元素的指针
    string nums[] ={"one", "two", "three"};
    string *p = &nums[0];
    string *p2 = nums;  //nums前可不加&引用符号，p2 = nums 等价于 p2=&nums[0] 
    auto p3 = nums;
    cout << p3 << *p3 <<endl;  //输出地址  和 one

    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto ia2(ia);  //ia2是一个整型指针，指向ia的第一个元素

    int last = *(ia + 4); //正确：ia返回首元素的指针，再解引，last被初始化为4
    int last2 = *ia + 4; //正确：等于 ia[0]  +4 等价于 0 + 4 ；

//对数组执行下标运算，其实是对数组元素的指针执行下标运算
    int i = ia[2];    //等价于：  i = *(ia + 2);
    //过程：ia先转化为指向首元素的指针，ia[2] 得到 ia + 2 所指的元素

    int *p_ia2 = &ia[2];
    int j = p_ia2[1];  //p_ia2[1] 等价于 *(p_ia2 + 1)，得到 ia[3]的元素
    int k = p_ia2[-2];  //得到 ia[0] 那个元素 

//begin(arr) end(arr)函数
    //返回的是指向数组的首元素的指针 和 尾后元素的指针
    int *pbeg = begin(ia), *pend = end(ia);
    cout << endl << endl;
    system("pause");
    return 0;
}