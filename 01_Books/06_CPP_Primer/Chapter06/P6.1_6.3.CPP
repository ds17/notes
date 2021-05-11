#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int fact(int n)
{
    if (n==1) return 1;
    else return  n * fact(n-1);
}

int main()
{
    cout << "inpute an integer: ";
    int n;
    cin >> n;
    cout << fact(n);
    cout << "\n\n";
    system("pause");
    return 0;
}