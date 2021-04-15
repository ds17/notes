#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double tsin(double x);

//例3-5 分段函数
int main(){

    double k, r, s;
    cout << "r= ";
    cin >> r;
    cout << "s= " ;
    cin >> s;
    if (r*r <= s*s){
        k =sqrt (tsin(r) * tsin(r) + tsin(s) * tsin(s));
    }else{
        k = tsin(r*s) /2;
    }
    cout << k << endl;
    
    cout << endl << endl;
    system("pause");
    return 0;
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