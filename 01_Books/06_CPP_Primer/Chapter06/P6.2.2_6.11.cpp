#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

void reset(int &i)
{
    i=0;
}

int main()
{
    int i =42;
    reset(i);
    cout << "i= " << i << "\n";

    
    cout << "\n\n";
    system("pause");
    return 0;
}