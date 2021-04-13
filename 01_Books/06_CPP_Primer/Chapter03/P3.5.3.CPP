#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto p1 = &ia[0], p2 = &ia[1];
    // cout << p2 << endl;
    // p1 += p2-p1;
    // cout << p1 << endl;
    // cout << *p1 << endl;


//P3.35
    for (int i = 0; i <=9; ++i){
        auto p3 = p1 + i;
        *p3 = 0;
    }

//P3.36?
    cout << endl << endl;
    system("pause");
    return 0;
}