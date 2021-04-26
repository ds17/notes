#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    
    string s = "word";
    string p1 = s + ((s[s.size() -1] == 's') ? "" : "s");
    cout << p1 ;
    cout << "\n\n";
    system("pause");
    return 0;
}