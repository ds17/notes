#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

unsigned int s_abs(int i)
{
    if (i <0) return -i;
    else return i;
}

int main()
{
    cout << "inpute an integer: ";
    int i;
    cin >> i;
    cout << "abs(" << i << ") is " << s_abs(i); 
    
    cout << "\n\n";
    system("pause");
    return 0;
}