#include <iostream>
// #include <string>
// #include <cctype>
#include <vector>

using namespace std;

int main()
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string letterGrade;
    int intGrade;
    
    cout << "Input a integer grade: ";
    cin >> intGrade;
    if (intGrade == 100)
    {
        letterGrade = scores[5];
    }else if (intGrade < 60)
    {
        letterGrade = scores[0];
    }else 
    {
        letterGrade = scores[intGrade/10 - 5 ];
    }

    if (intGrade %10 <3)
    {
        letterGrade += "-";
    }else if (intGrade %10 >7)
    {
        letterGrade += "+";
    }
    
    cout << "The letterGrade is: " << letterGrade ;
    
    cout << "\n\n";
    system("pause");
    return 0;
}