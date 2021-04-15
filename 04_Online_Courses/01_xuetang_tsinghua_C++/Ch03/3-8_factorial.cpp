#include <iostream>
using namespace std;

//求阶乘
unsigned factorial(int n){
    unsigned r;
    if (n == 0){
        r = 1;   //递归的最底层
    }else{
        r = n * factorial(n-1);
    }
    return r;
}

int main(){
    int n;
    cin >> n;
    cout << "n!= " << factorial(n) << endl;

    cout << endl << endl;
    system("pause");
    return 0;
}






