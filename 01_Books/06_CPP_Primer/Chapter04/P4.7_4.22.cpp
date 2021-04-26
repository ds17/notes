#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void conditionOperator()
{
    vector<int> gradeVec;
    vector<string> sVec;
    const int sz = 10;
    srand((unsigned) time (NULL));
    cout << "The grade value is: \n";
    for (int i = 0; i < sz; ++i)
    {
        gradeVec.push_back(rand() % 71 + 30);
        cout << gradeVec[i] <<"  ";
    }

    for (auto item : gradeVec)
    {
        string str = (item > 90) ? "High pass" 
                    : (item > 75) ? "Pass" 
                    : (item > 60)? "Low Pass" : "Fail";
        sVec.push_back(str);
    }

    cout << "\n\nThe class is: \n";
    for (auto item : sVec)
    {
        cout << item << "  ";
    }

}


int main()
{
    conditionOperator();
    
    cout << "\n\n";
    system("pause");
    return 0;
}