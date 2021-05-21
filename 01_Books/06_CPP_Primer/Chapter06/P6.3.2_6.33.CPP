#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
#include <vector>

using namespace std;

void print(vector<int> vInt, unsigned index)
{
    unsigned sz = vInt.size();
    if (!vInt.empty() && index < sz)
    {
        cout << vInt[index] << " ";
        print(vInt, index +1);
    }
}


int main()
{
    vector<int> ivec = {1,3,5,7,9,11,13,15};
    print(ivec,0);
    
    cout << "\n\n";
    system("pause");
    return 0;
}