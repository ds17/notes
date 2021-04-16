#include <iostream>
using namespace std;

int sumOfSquare(int a, int b);
double sumOfSquare(double a, double b);
int main(){


    
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
