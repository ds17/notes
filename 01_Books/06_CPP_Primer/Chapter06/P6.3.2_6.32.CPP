#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int &get(int *array, int index) {return array[index];}

int main()
{
    int ia[10];
    for (int i =0; i!=10; ++i)
    {
        get(ia, i) = i;
    }
    
    cout << "\n\n";
    system("pause");
    return 0;
}