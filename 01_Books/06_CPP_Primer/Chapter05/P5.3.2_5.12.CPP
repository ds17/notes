#include <iostream>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main()
{
    char ch1, ch2;
    unsigned int cnt_ff =0, cnt_fi = 0, cnt_fl = 0;
    
    while (cin >> ch1)
    {
        switch (ch1)
        {
        case 'f':
            cin >> ch2;
            switch (ch2)
            {
                case 'f':
                    ++cnt_ff;
                    break;
                case 'i':
                    ++cnt_fi;
                    break;
                case 'l':
                    ++cnt_fl;
                    break;
            }
            break;
        }
    }

    cout << "fl occurs " << cnt_fl << " times.\n\n";
    cout << "fi occurs " << cnt_fi << " times.\n\n";
    cout << "ff occurs " << cnt_ff << " times.\n\n";

    cout << "\n\n";
    system("pause");
    return 0;
}