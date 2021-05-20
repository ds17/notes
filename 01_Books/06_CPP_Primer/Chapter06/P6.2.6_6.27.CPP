#include <iostream>
// #include <stdexcept>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int sum_list(initializer_list<int> l1)
{
    int sum =0 ;
    for (const int item : l1)
    {
        sum += item;
    }
    return sum;
}

int main()
{
    cout << sum_list({1,3,5,7,9,11,13});
    
    cout << "\n\n";
    system("pause");
    return 0;
}