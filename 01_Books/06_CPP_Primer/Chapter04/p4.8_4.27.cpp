#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

template <class T>
void printbybit(const T& ob)
{
    char *p_e=(char *)&ob;
    char *p=p_e+sizeof(T)-1;
    for(;p>=p_e;p--){
        for(int i=7;i>=0;i--){
            cout<<(((*p)&(1<<i))?1:0);
        }
    }
}

int main()
{
    unsigned long ul1 = 3, ul2 = 7;
    /*
    ul1：           00000000 00000000 00000000 00000011
    ul2：           00000000 00000000 00000000 00000111
    ul1 & ul2：     00000000 00000000 00000000 00000011  → 3
    ul1 | ul2：     00000000 00000000 00000000 00000111  → 7
    */
    printbybit(ul1 & ul2);
    cout << "\n" << (ul1 & ul2) << "\n" ;

    printbybit(ul1 | ul2);
    cout << "\n" << (ul1 | ul2) << "\n" ;

    
    cout << "\n\n";
    system("pause");
    return 0;
}