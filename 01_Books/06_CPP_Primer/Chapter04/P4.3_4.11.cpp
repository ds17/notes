#include <iostream>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "input 4 integer: \n";
    cin >> a >> b >> c >> d;
    if (a>b && b>c && c>d) cout << "got it\n";
    else cout << "negative\n";
    
    cout << "\n\n";
    system("pause");
    return 0;
}