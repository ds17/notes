#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for (decltype(s.size()) i = 0; i < s.size(); ++i)
    {
        if (s[i] == c)
        {
            if (ret == s.size())
            {
                ret = i;  
            }
            ++occurs;
        }
    }
    return ret;
}

int main()
{
    string::size_type ctr = 0;
    string s = "i love you";
    char c = 'o';
    auto index = find_char(s, c, ctr);
    cout << "first " << index << " " << ctr;
    
    cout << "\n\n";
    system("pause");
    return 0;
}