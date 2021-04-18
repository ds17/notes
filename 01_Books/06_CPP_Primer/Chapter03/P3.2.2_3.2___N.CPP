#include <iostream>
#include <string>
using namespace std;

int cin_line(), cin_word();
int main(){
    cin_line();
    // cin_word(); 
    return 0;
}

int cin_line(){
    string s;
    while (getline(cin, s)){    
        //从流的开头开始读入，直到遇到换行符为止，包括开头，中间或结尾的空白，
        //换行符也被读进来了，但是会被遗弃
        if (!s.empty()){
            cout << "print: " << s << endl;
            cout << "size: " << s.size() <<endl;
        }else{
            cout << "empty line" << endl;
        }
    }
    return 0;
}

int cin_word(){
    string s;
    while (cin >> s){        
        //忽略开头的空白（空格，换行符，制表符等），并从第一真正的字符开始读起，直到遇见下一处空白
        cout << "print word: " <<  s << endl;
    }
    return 0;
}