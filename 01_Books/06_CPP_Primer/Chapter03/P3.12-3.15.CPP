#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;
int p3_12(), p3_14();
int main(){
    
    p3_14();
    cout << endl << endl;
    system("pause");
    return 0;
}


int p3_12(){
    vector<vector<int>> ivec;
    // vector<string> svec =ivec;  //错误
    vector<string> svec(10, "null");

    vector<int> v3(10, 42);
    vector<int> v4{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    for (auto item : v7){
        cout << "cout: " << item <<endl;
    }
    return 0;
}

int p3_14(){
    int val;
    vector<int> ivec;
    while (cin >> val){
        ivec.push_back(val);
    } 
    for (auto item : ivec){
        cout << "cout: " << item <<endl;
    }
}
