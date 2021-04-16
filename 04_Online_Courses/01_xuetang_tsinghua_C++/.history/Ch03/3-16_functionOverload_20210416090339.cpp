#include <iostream>
using namespace std;

int sumOfSquare(int a, int b);
double sumOfSquare(double a, double b);
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
