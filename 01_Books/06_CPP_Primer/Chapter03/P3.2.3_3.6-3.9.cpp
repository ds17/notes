#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string s ;
    cin >> s;

    // //3.6 for语句
    // for (auto c : s){
    //     c = 'X';
    //     cout << c ;
    // }

    //3.7 char
    // for (char c : s){
    //     c = 'X';
    //     cout << c ;
    // }    

    //3.8 for循环
    // for (decltype(s.size()) index = 0; index < s.size(); ++index){
    //     s[index] = 'X';  //s[index]是一个char类型
    // }
    // cout << s << endl;

    //3.8 while循环
    // decltype(s.size()) index = 0;
    // while (index < s.size()){
    //     s[index] = 'X';
    //     ++index;
    // }
    // cout << s << endl;

    //3.9
    string ss;
    cout << ss[0] << endl;



    cout << endl << endl;
    system("pause");
    return 0;
}