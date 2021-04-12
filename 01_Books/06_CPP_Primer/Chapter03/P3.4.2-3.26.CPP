#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    string text = "abcdefghijklmnopqrstuvwxyz";
    auto beg = text.begin(), end = text.end();
    auto mid = beg + (end - beg) /2;
    char sought = 'r';
    while (mid != end && *mid!=sought){
        if (sought < *mid){
            end = mid;
        }else
        {
            beg = mid;
        }
         mid = beg + (end - beg) /2;
    }
    auto i = mid - text.begin();
    cout << "target: " << i << "  " << text[i] << endl;
        

    cout << endl << endl;
    system("pause");
    return 0;
}