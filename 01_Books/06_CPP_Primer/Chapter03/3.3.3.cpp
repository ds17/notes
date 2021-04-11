#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    vector<unsigned> vec(11, 0);
    unsigned grade;
    while (cin >> grade){
        ++vec[grade/10];
    }

    for (auto item : vec){
        cout << item << endl;
    }

    cout << endl << endl;
    system("pause");
    return 0;
}