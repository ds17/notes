#include <iostream>
// #include <stdexcept>
#include <string>
// #include <cctype>
// #include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void ptr_exchange(int *&p1, int *&p2);

int main()
{
    srand((unsigned) time (NULL));
    int a1[6], a2[12];
    for (auto &i : a1) i = rand() % 100;
    for (auto &i : a2) i = rand() % 100;

    cout << "array a1 is: ";
    for (auto i : a1) cout << i << " ";
    cout << "\n\n";

    cout << "array a2 is: ";
    for (auto i : a2) cout << i << " ";
    cout << "\n\n";
    int *p1 = a1;
    int *p2 = a2;
    cout << *(p1 +2) << "\n";
    cout << *(p2 +2) << "\n";
    ptr_exchange(p1, p2);
    cout << *(p1 +2) << "\n";
    cout << *(p2 +2) << "\n";
    
    cout << "\n\n";
    system("pause");
    return 0;
}

void ptr_exchange(int *&p1, int *&p2)
{
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}
