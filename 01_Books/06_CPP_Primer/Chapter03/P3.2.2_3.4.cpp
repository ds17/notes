#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1, s2;
    cout << "input two words: " << endl;
    cin >> s1 >>s2;
    
    //比较大小，输出大的字符串
    if (s1==s2){
        cout << "the two words are same.\n"; 
    }else{
        if (s1>s2){
            cout << "the bigger one is: " << s1 <<endl;
        }else{
            cout << "the bigger one is: " << s2 <<endl;
        }
    }

    //比较长度，输出长的那个
    if (s1.size() == s2.size()){
        cout << "The length of the two words are the same.\n"; 
    }else{
        if (s1.size() > s2.size()){
            cout << "The longer one is: " << s1 <<endl;
        }else{
            cout << "The longer one is: " << s2 <<endl;
        }
    }

    cout << endl << endl;
    system("pause");
    return 0;
}