#include <iostream>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main()
{
    
    cout << sizeof(bool) << "\n";               //1 Byte
    cout << sizeof(char) << "\n";               //1 Byte

    cout << sizeof(short) << "\n";              //2 Byte
    cout << sizeof(unsigned short) << "\n";     //2 Byte

    cout << sizeof(int) << "\n";                //4 Byte
    cout << sizeof(unsigned int) << "\n";       //4 Byte

    cout << sizeof(long) << "\n";               //4 Byte
    cout << sizeof(unsigned long) << "\n";      //4 Byte
    
    cout << sizeof(float) << "\n";              //4 Byte
    cout << sizeof(double) << "\n";             //8 Byte
    cout << sizeof(long double) << "\n";        //16 Byte
  
    cout << sizeof(long long) << "\n";          //8 Byte

    cout << "\n\n";
    system("pause");
    return 0;
}