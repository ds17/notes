#include <iostream>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int main()
{
    string s;
    int cnt_a = 0, cnt_e = 0, cnt_i = 0, cnt_u =0, cnt_o = 0;
//if 自己实现的
    // while (cin >> s)
    // {
    //     for (auto item : s)
    //     {
    //         if (item == 'a' || item == 'A')
    //             ++cnt_a;
    //         if (item == 'e' || item == 'E')
    //             ++cnt_e;
    //         if (item == 'i' || item == 'I')
    //             ++cnt_i;
    //         if (item == 'u' || item == 'U')
    //             ++cnt_u;
    //     }
    // }

//if 标准答案实现
    // char ch;
    // while (cin >> ch)
    // {
        
    //     if (ch == 'a' || ch == 'A')
    //         ++cnt_a;
    //     if (ch == 'e' || ch == 'E')
    //         ++cnt_e;
    //     if (ch == 'i' || ch == 'I')
    //         ++cnt_i;
    //     if (ch == 'u' || ch == 'U')
    //         ++cnt_u;
    // }

//switch 实现
    char ch;
    while (cin >> ch)
    {
        switch (ch)
        {
            case 'a':
            case 'A':
                ++cnt_a;
                break;  //break最靠近它的控制体，所以是break switch,而不是break while
            case 'e':
            case 'E':
                ++cnt_e;
                break;
            case 'i':
            case 'I':
                ++cnt_i;
                break;
            case 'u':
            case 'U':
                ++cnt_u;
                break;
            default:
                break;
        }
    }


    cout << "e or E occurs " << cnt_e << " times.\n\n";
    cout << "a or A occurs " << cnt_a << " times.\n\n";
    cout << "i or I occurs " << cnt_i << " times.\n\n";
    cout << "u or U occurs " << cnt_u << " times.\n\n";
    
    cout << "\n\n";
    system("pause");
    return 0;
}