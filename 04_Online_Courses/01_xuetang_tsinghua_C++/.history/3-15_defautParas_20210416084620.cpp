#include <iostream>
#include <iomanip>
using namespace std;

double getVolume(double length, double width=2.0, double height=3.0);

int main(){

    
    cout << endl << endl;
    system("pause");
    return 0;
}

double getVolume(double length, double width, double height){
    cout << setw(5) << length << setw(5) << width << setw(5) << height << '\t';
    return length * width *height;
}