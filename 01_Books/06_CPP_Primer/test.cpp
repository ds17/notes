#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    vector<string> svec = {"hello", "\0", "this", "is", "good"};

    // vector<string>::iterator iter = svec.begin();
    auto iter = svec.begin();
    // cout << (*iter).empty() << "\n";
    // cout << iter->empty() << "\n";
    // cout << *++iter <<"\n";
    cout << (++iter)->empty() << "\n";
    cout << iter->empty();



    cout << "\n\n";
    system("pause");
    return 0;
}