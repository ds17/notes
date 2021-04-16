#include <iostream>
using namespace std;

int sumOfSquare(int a, int b);
double sumOfSquare(double a, double b);
//重载函数的形参必须不同：要么个数，要么类型不同，但功能最好相同
//编译器根据实参和形参的类型及个数的最佳匹配来选择调用哪个函数
int main(){
    int m, n;
    cout << "enter two integer: ";
    cin >> m >> n;
    cout << "The sum of square: " << sumOfSquare(m, n) << endl;

    double x,y;
    cout << "Enter two real number: " ;
    cin >> x >> y;
    cout << "Their sum of square: " << sumOfSquare(x, y) << endl;

    
    cout << endl << endl;
    system("pause");
    return 0;
}

int sumOfSquare(int a, int b){
    return a*a + b*b;
}

double sumOfSquare(double a, double b){
    return a*a + b*b;
}
