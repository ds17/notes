#include <iostream>
using namespace std;

double rectangle(double lenth, double width){return lenth * width;}

double circleArea(double r){
    return 3.1415926 * r * r;
}


int main(){
    enum shape {CIRCLE=1, RECTANGLE, SQUARE};
    cout << "shape kind:(1-circle, 2-rectangle, 3-square)" << endl;
    int iType;
    cin >> iType;

    double r, a, b;
    switch (iType)
    {
    case CIRCLE:
        cout << "input radius: ";
        cin >> r;
        cout << "The area of the circle is :" << circleArea(r);
        break;
    
    case RECTANGLE:
        cout << "Input length and width: " ;
        cin >> a >> b;
        cout << "the area of the rectangle is : " << rectangle(a, b);
        break;

    case SQUARE:
        cout << "input the length of the square side: " ;
        cin >> a;
        cout <<  "the area of the squrare is : " << rectangle(a, a);
        break;

    default:
        break;
    }
    
    cout << endl << endl;
    system("pause");
    return 0;
}