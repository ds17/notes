//形参用引用，进而实现参数的双向传递
#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int t = a;
    a= b;
    b = t;
}

int main(){
    cout << "input two integer: ";
    int x,y;
    cin >> x >> y;
    cout << "x=" << x  << " y= " << y << endl;
    swap(x, y);
    cout << "x=" << x  << "y= " << y << endl;

    cout << endl << endl;
    system("pause");
    return 0;
}
