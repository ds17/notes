
//左值：一个可以存放东西的容器，右值：仅仅时一个值

#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec={1,2,3,4,5,6,7,8,9,10};
    
    cout << *ivec.begin() << "\n";

    cout << "\n\n";
    system("pause");
    return 0;
}