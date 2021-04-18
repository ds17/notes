#include <iostream>
using namespace std;

struct myTimeStruct
{
    unsigned year, month, day, hour, minute, second; 
};

int main(){
    myTimeStruct myTime = {2015, 3, 16, 12, 0, 0};
    cout << "Please input year: " << endl;
    cin >> myTime.year;
    unsigned month;

    cout << "Please input month: " << endl;
    
    cin >> month;
    while (month <= 0 || month > 12){
        cout << "Please re-input a right number between 1 to 12: " <<endl;
        cin >> month;
    }
    myTime.month = month;

    cout << "Please input day: " << endl;
    cin >> myTime.day;

    cout << "Please input hour: " << endl;
    cin >> myTime.hour;

    cout << "Please input minute: " << endl;
    cin >> myTime.minute;

    cout << "Please input second: " << endl;
    cin >> myTime.second;

    cout << "The time is " << myTime.year << "/" << myTime.month <<  "/" << myTime.day << " " 
            << myTime.hour << ":" << myTime.minute << ":" << myTime.second << endl;

    cout << endl << endl;
    system("pause");
    return 0;
}