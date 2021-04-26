#include <iostream>
// #include <string>
// #include <cctype>
// #include <vector>

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
    //字符 q 的二进制形式是：01110001

    printbybit('q');      //输出：01110001
    cout << "\n\n";

    /*
    位运算符的运算对象应该是整数型，所以字符 'q' 首先转换为整数类型。
    转换后得到：00000000 00000000 00000000 01110001，然后再求反
    */

    printbybit(~'q');     //输出：11111111 11111111 11111111 10001110
    cout << "\n\n";

    //移位操作
    printbybit(~'q'<<6);  //输出：11 11111111 11111111 10001110 000000   
    cout << "\n\n"; 

    /*
    C++规定整数按照补码形式存储，对上式求补：符号位保持不动，其他位取反，最后+1
    求反：10 00000000 00000000 01110001 111111
    +1：  10 00000000 00000000 01110010 000000
    即：  10000000 00000000 00011100 10000000， 对应十进制整数：-7296
    */

    cout << (~'q'<<6);    //输出：-7296

    
    cout << "\n\n";
    system("pause");
    return 0;
}