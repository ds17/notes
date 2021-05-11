#include <iostream>
#include <stdexcept>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main()
{

    cout << "input two integers: " ;
    int v1, v2;
    cin >> v1 ;
    
    while (cin >> v2)
    {
        try
        {
            if (v2 == 0)
            {
                throw runtime_error("Can not be divided by zero. \n");
            }
            cout << static_cast<double>(v1) / v2;
            break;
        }
        catch(runtime_error e)
        {
            cout << e.what() << "\n"
                 << "inpute divisior again? y or n? ";
            char c;
            cin >> c;
            if (!cin || c == 'n') break; 
            else cout << "Re-inpute a divisior: "; 
        }
    }
    
    
    cout << "\n\n";
    system("pause");
    return 0;
}