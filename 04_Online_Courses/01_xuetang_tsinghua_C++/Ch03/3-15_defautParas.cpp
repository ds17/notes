#include <iostream>
#include <iomanip>
using namespace std;

double getVolume(double length, double width=2.0, double height=3.0);
//如果要带默认值，第一次声明时就要体现
//带默认值的永远只能放在最右边，运行时按顺序取值

int main(){

    const int x = 10, y = 12, z = 15;
    cout << getVolume(x, y , z) << endl;
    cout << getVolume(x, y) << endl;
    cout << getVolume(x) << endl;
    cout << endl << endl;
    system("pause");
    return 0;
}

double getVolume(double length, double width, double height){
    cout << setw(5) << length << setw(5) << width << setw(5) << height << '\t';
    return length * width *height;
}