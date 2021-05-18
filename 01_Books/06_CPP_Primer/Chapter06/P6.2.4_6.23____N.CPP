#include <iostream>
// #include <stdexcept>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;

void print(const char *cp)
{
    if (cp)
    {
        while (*cp)
        {
            cout << *cp++ << "\n";
        }
    }
}

void print(const int *beg, const int *end)
{
    while (beg!=end)
    {
        cout << *beg++ << "\n";
    }
}

void print(const int ia[], size_t size)
{
    for (size_t i =0; i < size; ++i)
    {
        cout << ia[i] << "\n";   //..指针指向数组时可以执行下标运算：ia[i] 等价于 *(ia + i)
    } 
}

//..数组引用形参
/*
int &arr[10]    首先arr是一个数组，然后：它是int &的数组
int (&arr)[10]  首先arr是一个引用，然后：它是对 int [3]的引用
*/
void print(int (&arr)[3])   //
{
    for (auto item : arr)
    {
        item += 5;
        cout << item << "\n";
    }
}

void print(int (*matrix)[3], int rowsize)
{
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j <3; ++j)
        {
            cout << (*matrix)[j] << "\n";
        }
        ++matrix;
    }
}

int main()
{

    int i =0, j[3] = {1,2,3};
    int *p = j;
    // cout<< p[0];

    char s[] = {'h', 'e', 'l', 'l', 'o'}; 
    // print(s);
    // print(begin(j), end(j));
    // print(j, end(j)-begin(j));
    // print(j);
    int m[2][3] = {{5,6,7},{8,9,10}};
    auto row = sizeof(m)/sizeof(m[0]);
    auto coloum = sizeof(m[0]) / sizeof(m[0][0]);

    print (m, 2);
    
    cout << "\n\n";
    system("pause");
    return 0;
}

