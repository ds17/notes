#include <iostream>
#include <string>
// #include <cctype>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10,5);
    vector<int>::size_type cnt = ivec.size();

    for (vector<int>::size_type ix = 0; ix!=ivec.size(); ++ix, --cnt)
    {
        ivec[ix] = cnt;
    }
    
    
    cout << "\n\n";
    system("pause");
    return 0;
}