#include <iostream>
#include <cmath>
#include <iomanip>
// #include <string>
// #include <cctype>
// #include <vector>
using namespace std;

double power(double x, int n);
double s_acrtan(double x);
bool huiWen(unsigned x);


int main(){

//例3-1
    // cout << "5 to the power 2 is " << power(5,2) << endl;

//例3-2
    // int value = 0, ch=0;
    // cout << "enter an 8 bit binary number: " << endl;
    // for (int i =7; i>=0; i--){
    //     char ch;    //每次循环都初始化为 '0',并从输入流中提取一个字符
    //     cin >> ch;
    //     if (ch == '1'){
    //         value += static_cast<int>(power(2, i));
    //     }

    //     // //00001101需要每个字符中间加分隔符才能正确分割
    //     // cin >> ch;
    //     // value += ch * power(2, i);
    // }
    // cout << "the decimal number is " <<  value;

//例3-3
    // double pi;
    // pi = 16 *  s_acrtan(1/5.0) - 4 * s_acrtan(1/239.0);
    // cout << pi << endl;

//例3-4
    for (unsigned m = 11; m<1000; m++){
        if (huiWen(m) && huiWen(m*m) && huiWen(m*m*m)){
            cout << "m= " << m ;
            cout << "m*m= " << m*m ;
            cout << "m*m*m= " << m*m*m << endl;
        }
    }

    cout << endl << endl;
    system("pause");
    return 0;
}

//例3-1
double power(double x, int n){
    double val = 1.0;
    while (n--) val *= x;
    return val;
}

//例3-3
double s_acrtan(double x){
    double result = 0;
    double sqr = x * x;   //反复用到x^2，用一个变量存起来，减少重复计算
    double e = x;
    int i =1;
    const double tiny_number = 1e-15;
    while (e/i > tiny_number)
    {
        double f = e/i;
        result = (i % 4 == 1)? result + f : result - f;
        e = e * sqr;
        i += 2;
    }

    // int n = 1, bottom = 1, f_sign = 1;
    // double f=1;
    // while (e / bottom > tiny_number)
    // {
    //     f = f_sign * e / bottom;
    //     result += f;
    //     e = e *sqr;
    //     n++;
    //     bottom = 2*n - 1;
    //     f_sign *= -1;   //每次改变±号
    // }
    
    return result;
}

//例3-4 寻找回文数
bool huiWen(unsigned x){
    // //自己想的
    // unsigned yuShu, newNum=0, origin_num, shang;
    // origin_num = x;
    // while ( x != 0)
    // {
    //     shang = x/10;
    //     yuShu = x % 10;
    //     newNum = newNum * 10 + yuShu;
    //     x = shang;
    // }
    // if (newNum == origin_num) return true; else return false;
    
    //例题答案
    unsigned i = x;
    unsigned m = 0;
    while ( i > 0){
        m = m *10 + i % 10;
        i /=10;
    }
    return m == x;
}








