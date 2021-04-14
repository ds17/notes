#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>
#include <cstdlib>
// #include <string>
// #include <cctype>
// #include <vector>
using namespace std;

double power(double x, int n);
double s_acrtan(double x);
bool huiWen(unsigned x);
double tsin(double x);
int rollDice();


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
    // for (unsigned m = 11; m<1000; m++){
    //     if (huiWen(m) && huiWen(m*m) && huiWen(m*m*m)){
    //         cout << "m= " << m ;
    //         cout << "m*m= " << m*m ;
    //         cout << "m*m*m= " << m*m*m << endl;
    //     }
    // }

//例3-5 分段函数
    // double k, r, s;
    // cout << "r= ";
    // cin >> r;
    // cout << "s= " ;
    // cin >> s;
    // if (r*r <= s*s){
    //     k =sqrt (tsin(r) * tsin(r) + tsin(s) * tsin(s));
    // }else{
    //     k = tsin(r*s) /2;
    // }
    // cout << k << endl;

//例3.6掷骰子游戏
    int sum, myPoint;
    unsigned seed;
    enum GameStatus {WIN, LOSE, PLAYING};
    GameStatus status;

    cout << "please enter an unsigned integer: ";
    cin >> seed;
    srand(seed);
    sum = rollDice();

    switch (sum)
    {
    case 7:
    case 11:
        status = WIN;
        break;
    case 2:
    case 3:
    case 12:
        status = LOSE;
        break;
    default:
        status = PLAYING;
        myPoint = sum;
        cout << "point is " << myPoint << endl;
        break;
    }

    while (status == PLAYING)
    {
        sum = rollDice();
        if (sum == myPoint){
            status = WIN;
        }else if (sum == 7)
        {
            status = LOSE;
        }
    }

    if (status == WIN)
    {
        cout << "player wins" << endl;
    }else{
        cout << "player loses" << endl;
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

//例3-5 分段函数的sinx
double tsin(double x){
    double r = 0;
    const double tiny_number = 1e-10;
    double f = x;
    double sqr = x * x;
    int n =1;
    while (fabs(f) > tiny_number)
    {
        r += f;
        n +=2;
        f *= -sqr / n / (n-1);
    }
    return r;
}

//例3-6掷骰子
int rollDice(){
    int die1 = 1 + rand() % 6;  //rand返回一个随机的整数
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;

    return sum;
}




