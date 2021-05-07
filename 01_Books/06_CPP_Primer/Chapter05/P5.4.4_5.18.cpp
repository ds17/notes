#include <iostream>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main()
{
    do
    {
        int v1, v2;
        cout << "please enter two numbers to sum: ";
        if (cin >> v1 >> v2)
            cout << "sum is " << v1 + v2 << "\n";
    } while (cin);
    
    
    cout << "\n\n";
    system("pause");
    return 0;
}