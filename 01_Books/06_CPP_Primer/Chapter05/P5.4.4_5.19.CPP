#include <iostream>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main()
{
    string s1, s2;
    do
    {
        cout << "input two string: " << "\n";
        if (cin >> s1 >> s2)
        { 
            if (s1.size() > s2.size())
            {
                cout << "the shorter one is: " << s2 << "\n";
            }else if (s1.size() < s2.size())
            {
                cout << "the shorter one is: " << s1 << "\n";
            }else
            {
                cout << "the two strings are the same." << "\n";
            }
        }
    } while (cin);
    
    
    cout << "\n\n";
    system("pause");
    return 0;
}