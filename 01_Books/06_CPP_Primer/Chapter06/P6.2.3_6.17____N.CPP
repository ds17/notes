#include <iostream>
// #include <stdexcept>
#include <string>
#include <cctype>
// #include <vector>

using namespace std;

bool any_upCase(const string &);
void to_lowerCase(string &);
void std_anwser_toLower(string &);

int main()
{

    // cout << any_upCase("asdfaSfd");
    string s = "DAFDAFAFGADS";
    cout << "before covert, s is " << s << "\n";
    // to_lowerCase(s);
    std_anwser_toLower(s);
    cout << "after covert, s is " << s << "\n";

    cout << "\n\n";
    system("pause");
    return 0;
}

bool any_upCase(const string&s)
{
    for (auto item : s)
    {
        if (isupper(item))  return 1;
    }
    return 0;
}

void to_lowerCase(string &s)
{
    for (decltype(s.size()) i=0; i < s.size(); ++i)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
}

void std_anwser_toLower(string &s)
{
    for (auto &c : s)      //定义一个字符，该字符是字符串中的引用
    {
        c = tolower(c);
    }
}