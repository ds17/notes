#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double power(double x, int n);

int main(){

//例3-1
    // cout << "5 to the power 2 is " << power(5,2) << endl;

//例3-2
    int value = 0, ch=0;
    cout << "enter an 8 bit binary number: " << endl;
    for (int i =7; i>=0; i--){
        char ch;    //每次循环都初始化为 '0',并从输入流中提取一个字符
        cin >> ch;
        if (ch == '1'){
            value += static_cast<int>(power(2, i));
        }

        // //00001101需要每个字符中间加分隔符才能正确分割
        // cin >> ch;
        // value += ch * power(2, i);
    }
    cout << "the decimal number is " <<  value;


    cout << endl << endl;
    system("pause");
    return 0;
}

double power(double x, int n){
    double val = 1.0;
    while (n--) val *= x;
    return val;
}





