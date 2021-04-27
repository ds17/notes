#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    int i;
    double d;
    // static_cast<int>(i*=d);
    i *= static_cast<int>(d);
    
    cout << "\n\n";
    system("pause");
    return 0;
}