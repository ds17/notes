#include <iostream>
// #include <stdexcept>
#include <string>
// #include <cctype>
// #include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int compare(const int a, const int *b)
{
    if (a <= *b) return *b;
    else return a;
}

int  std_myCompare(const int val, const int *p)
{
    return (val > *p)? val : *p;
}

int main()
{

    srand((unsigned) time (NULL));
    int a[10];
    for (auto &i : a)
    {
        i = rand() % 100;
    }

    int j = 10;
    cout << "The bigger one of j and the first item of array a is : " << std_myCompare(j, a) << "\n\n";

    cout << "All the items in array a are: " << "\n";
    for (auto i : a)
    {
        cout << i << "\n";
    }

    cout << "\n\n";
    system("pause");
    return 0;
}