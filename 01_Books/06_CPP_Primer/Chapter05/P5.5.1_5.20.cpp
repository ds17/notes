#include <iostream>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;
void myAnswer();
void stdAnswer();
void myAnswer5_21();
void stdAnswer5_21();

int main()
{
    myAnswer5_21();
    
    cout << "\n\n";
    system("pause");
    return 0;
}

void myAnswer()
{
    string pre_s, cur_s;
    while (cin >> cur_s)
    {
        if (pre_s == cur_s)
        {
            cout << cur_s << " has apeared twice";
            break;
        }
        pre_s = cur_s;
    }
}

void stdAnswer()
{
    string pre_s, cur_s;

    //建议一个标识符，像个flag一样
    bool b1 = true;

    while (cin >> cur_s)
    {
        if (cur_s == pre_s)
        {
            b1 = false;     //出现连续的字符串，改变flag的状态。                                  
            cout << cur_s << " has apeared twice";
            break;
        }
        pre_s = cur_s;
    }

    if (b1)
    {
        cout << "No consecutive strings " << "\n";
    }
}

void myAnswer5_21()
{
    string pre_s, cur_s;

    //建议一个标识符，像个flag一样
    bool b1 = true;

    while (cin >> cur_s)
    {
        if (cur_s == pre_s)
        {
            if (isupper(cur_s[0]))
            {
                b1 = false;     //出现连续的字符串，改变flag的状态。                                  
                cout << cur_s << " has apeared twice";
                break;
            }else continue;

        }
        pre_s = cur_s;
    }

    if (b1)
    {
        cout << "No consecutive strings " << "\n";
    }   
}

void stdAnswer5_21()
{
    string pre_s, cur_s;

    //建议一个标识符，像个flag一样
    bool b1 = true;

    while (cin >> cur_s)
    {
        if (!isupper(cur_s[0]))
            continue;
        if (cur_s == pre_s)
        {
            b1 = false;     //出现连续的字符串，改变flag的状态。                                  
            cout << cur_s << " has apeared twice";
            break;
        }
        pre_s = cur_s;
    }

    if (b1)
    {
        cout << "No consecutive strings " << "\n";
    }   
  
}