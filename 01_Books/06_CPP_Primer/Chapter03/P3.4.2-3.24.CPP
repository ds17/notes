#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    vector<int> ivec;
    int val;
    while (cin >> val){
        ivec.push_back(val);
    }

    // auto it1 = ivec.begin();
    // auto it2 = ivec.begin() + 1;

    // while (it2 < ivec.end()){
    //     cout << *it1 + *it2 << endl;
    //     ++it1;
    //     ++it2;
    // }

    auto it1 = ivec.begin();
    auto it2 = ivec.end() -1;
    auto mid = it1 + ivec.size() / 2;
    while (it1 <= mid && it2 >= mid) {
        cout << *it1 + *it2 << endl;
        ++it1;
        --it2;
    }   


    cout << endl << endl;
    system("pause");
    return 0;
}