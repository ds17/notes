#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

//按位输出
template <class T>
void printbybit(const T& ob)
{
    char *p_e=(char *)&ob;
    char *p=p_e+sizeof(T)-1;
    for(;p>=p_e;p--){
        for(int i=7;i>=0;i--){
            cout<<(((*p)&(1<<i))?1:0);
        }
    }
}

int main()
{
    unsigned long quiz1 = 0;
    printbybit(quiz1);         //输出：00000000 00000000 00000000 00000000
    cout << "\n\n";

    //生成一个只有第27位是1其他都是0的数
    unsigned long temp= 1UL << 27; 
    printbybit(temp);         //输出：00001000 00000000 00000000 00000000
    cout << "\n\n";

    //设置学生27：通过
    //按位执行 或
    quiz1 |= 1UL << 27;
    printbybit(quiz1);         //输出：00001000 00000000 00000000 00000000
    cout << "\n\n";
    
    //设置学生27：没通过
    //取反后 求 与
    quiz1 &= ~(1UL << 27);
    printbybit(quiz1);         //输出：00000000 00000000 00000000 00000000
    cout << "\n\n";

    //检查学生27 是否通过
    //求与
    bool status = quiz1 & (1UL << 27);

    cout << "\n\n";
    system("pause");
    return 0;
}