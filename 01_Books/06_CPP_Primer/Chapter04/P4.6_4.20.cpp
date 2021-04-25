#include <iostream>
#include <string>
// #include <cctype>
#include <vector>

using namespace std;

int main()
{
    vector<string> svec = {"hello", "\0", "this", "is", "good"};

    // vector<string>::iterator iter = svec.begin();
    auto iter = svec.begin();

//解引运算符的优先级低于点运算符
//成员访问运算符：ptr->men  等价于  (*ptr).mem
    // cout << (*iter).empty() << "\n";    

    // cout << iter->empty() << "\n";
    // cout << *++iter <<"\n";
    cout << (++iter)->empty() << "\n";
    cout << iter->empty();



    cout << "\n\n";
    system("pause");
    return 0;
}