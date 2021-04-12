#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){
    //下标方法实现
    vector<unsigned> vec(11, 0);
    unsigned grade;

    // while (cin >> grade){
    //     ++vec[grade/10];
    // }

    // for (auto item : vec){
    //     cout << item << endl;
    // }

    //迭代器运算方法实现
    auto it = vec.begin();
    auto temp =it;
    while (cin >> grade)
    {
        temp = it + grade/10;
        ++(*temp);
    }
    for (auto item : vec){
        cout << item << endl;
    }
    

    cout << endl << endl;
    system("pause");
    return 0;
}