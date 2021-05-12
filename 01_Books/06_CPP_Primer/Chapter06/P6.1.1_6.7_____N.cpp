#include <iostream>
// #include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

unsigned myCnt()
{
    static unsigned iCnt = -1;  //unsigned长度时4byte 赋值-1时，溢出得到 2^32 - 1,即unsinged的最大值
    ++iCnt; //+1得到0；
    return iCnt;
}

int main()
{
    char ch;
    do
    {
        cout << myCnt() << "\n";
        cout << "Continue? y or n? ";
        cin >> ch;
    } while (cin && ch == 'y');
    
    cout << "\n\n";
    system("pause");
    return 0;
}