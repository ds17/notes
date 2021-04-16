#include <iostream>
#include <iomanip>
using namespace std;

double getVolume(double length, double width=2.0, double height=3.0);

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