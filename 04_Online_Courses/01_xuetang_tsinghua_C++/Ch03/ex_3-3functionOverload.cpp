#include <iostream>
#include <cmath>
using namespace std;

int max1(int a, int b){
    cout << "max1.1\n";
    if (a == b){
        return a;
    }else{
        if (a > b){
            return a;
        }else{
            return b;
        }
    }
}

int max1(int a, int b, int c){
    cout << "max1.2\n" ;
    return max1(max1(a, b), c);
}

double max1(double a, double b){
    cout << "max1.3\n" ;
    if (abs(a-b)<1e-10){  //*双精度不能直接比较是否相等，要比较差值是否足够小
        return a;
    }else{
        if (a > b){
            return a;
        }else{
            return b;
        }
    }
}

double max1(double a, double b, double c){
    cout << "max1.4\n"  ;
    return max1(max1(a, b), c);
}

int main(){
    // max1(2, 3);
    // max1(2, 3, 4);
    // max1(2.2,3.1);
    max1(2.2, 1.1, 2.3);
    
    cout << endl << endl;
    system("pause");
    return 0;
}