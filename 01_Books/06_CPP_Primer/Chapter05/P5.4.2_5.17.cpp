#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

void myAnswer(vector<int> ivec1, vector<int> ivec2);
void stdAnswer(vector<int> ivec1, vector<int> ivec2);
void vectorRefTest(vector<int> &ivec1);

int main()
{
    vector<int> ivec1 = {0, 1, 1, 2, 3, 5, 8};
    vector<int> ivec2 = {0, 1, 1, 2};

    // myAnswer(ivec1, ivec2);
    // stdAnswer(ivec1, ivec2);
    cout << "outside origin ivec1[2]= " << ivec1[2] << "\n";
    vectorRefTest(ivec1); 
    cout << "outside new ivec1[2]= " << ivec1[2] << "\n";    //输出9，因为传入ivec1的引用，因此ivec1[2]值被改变


    cout << "\n\n";
    system("pause");
    return 0;
}

void myAnswer(vector<int> ivec1, vector<int> ivec2)
{
    decltype(ivec1.size()) smaller_size;
    if (ivec1.size() > ivec2.size()) smaller_size = ivec2.size();
    else smaller_size = ivec1.size();

    for (decltype(smaller_size) ix = 0; ix < smaller_size; ++ix)
    {
        if (ivec1[ix] == ivec2[ix]) continue;
        else 
        {
            cout<< "False" << "\n\n"; 
            return;
        }
    }
    cout << "True";
}

void stdAnswer(vector<int> ivec1, vector<int> ivec2)
{
    auto it1 = ivec1.cbegin();
    auto it2 = ivec2.cbegin();

    while (it1 != ivec1.cend() && it2 != ivec2.cend())
    {
        if (*it1 != *it2) 
        {
            cout << "False \n";
            break;
        }
        ++it1;
        ++it2;
    }

    if (it1 == ivec1.cend()) cout << "ive1 is the prefix of ivec2 \n";
    if (it2 == ivec2.cend()) cout << "ive2 is the prefix of ivec1 \n";
}

void vectorRefTest(vector<int> &ivec1)
{
    cout << "inside origin ivec1[2]= " << ivec1[2] << "\n";
    ivec1[2] = 9;
    cout << "inside new ivec1[2]= " << ivec1[2] << "\n";
}