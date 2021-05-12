#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

void exchange_by_ptr(int *, int *);
void exchange_by_ref(int &, int &);

int main()
{
    int i1, i2;
    cout << "inpute two integers: ";
    cin >> i1 >>i2;
    cout << "i1= " << i1 << ",  " << "i2= " << i2 << "\n";
    exchange_by_ptr(&i1, &i2);
    // exchange_by_ref(i1, i2);
    cout << "After exchange, i1= " << i1 << ",  " << "i2= " << i2 << "\n";
    
    cout << "\n\n";
    system("pause");
    return 0;
}

void exchange_by_ptr(int *p1, int *p2)
{
    
    int i1 = *p1, i2 = *p2;
    *p1 = i2;
    *p2 = i1;
}

void exchange_by_ref(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}