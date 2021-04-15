#include <iostream>
using namespace std;

double s_acrtan(double x);
double power(double x, int n);

int main(){

    double pi;
    pi = 16 *  s_acrtan(1/5.0) - 4 * s_acrtan(1/239.0);
    cout << pi << endl;
    
    cout << endl << endl;
    system("pause");
    return 0;
}


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

