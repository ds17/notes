#include <iostream>
#include <string>
// #include <cctype>
// #include <vector>

using namespace std;
void myAnswer();
void stdAnswer();
void myAnswer2();

int main()
{
    //!两种不同的思路
    // myAnswer();
    // stdAnswer();
    myAnswer2();
    
    cout << "\n\n";
    system("pause");
    return 0;
}

/*
test input:
how now now now brown brown cow cow cow cow wow wow wow wow ha ha ha ha ha ha ha ba ba
*/

void myAnswer()
{
    string current_s, next_s, stored_s;
    cin >> current_s;
    unsigned int current_s_cnt=1, stored_s_cnt = 0;

    stored_s = current_s, stored_s_cnt = current_s_cnt;
    while (cin >> next_s)
    {
        if (current_s == next_s)
        {
            ++current_s_cnt;
        }else
        {
            if (current_s_cnt >= stored_s_cnt)
            {
                stored_s_cnt = current_s_cnt;
                stored_s = current_s;
            }
            current_s = next_s;
            current_s_cnt = 1;
        }
    }

    if (current_s_cnt >= stored_s_cnt)
    {
        stored_s_cnt = current_s_cnt;
        stored_s = current_s;
    }

    cout << stored_s << " occurs " << stored_s_cnt << " times.";
}

void stdAnswer()
{
    string currString, preString = "", maxString;
    int currCnt = 1, maxCnt = 0;
    while (cin >> currString)
    {
        if (currString == preString)
        {
            ++currCnt;
            if (currCnt > maxCnt)
            {
                maxCnt = currCnt;
                maxString = currString;
            }
        }else
        {
            currCnt = 1;
        }
        preString = currString;
    }

    if (maxCnt >1)
    {
        cout << "The most frequent string is " << maxString << " , and it occurs " << maxCnt << " times!";
    }else
    {
        cout << "Every string occurs 1 time \n";
    }
    
}

void myAnswer2()
{
    string current_s, pre_s, max_s;
    cin >> pre_s;
    unsigned int current_s_cnt=1, max_cnt = 1;
    max_s = pre_s;
    
    while (cin >> current_s)
    {
        if (current_s == pre_s)
        {
            ++current_s_cnt;
            if (current_s_cnt >= max_cnt)
            {
                max_cnt = current_s_cnt;
                max_s = current_s;
            }
        }else
        {
            current_s_cnt = 1;
        }
        pre_s = current_s;
    }    
    cout << max_s << " occurs " << max_cnt << " times.";
}