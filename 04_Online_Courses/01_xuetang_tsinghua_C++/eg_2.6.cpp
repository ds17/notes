#include <iostream>
using namespace std;

int main(){

//把一个数顺序颠倒，345 → 543
    int n, right_digits;
    cout << "enter the number: ";
    cin >> n;
    cout << "the number of reverse order is: ";
    do
    {
        right_digits = n % 10;
        cout << right_digits;
        n /=10;
    } while (n!=0);
     
    cout << sizeof(int);
    return 0;
}