#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;
void if_is_space(), if_is_empty();

int main(){

    vector<string> svec{"This is text file first graph.",  "second sentence", "\n", "", "second graph"};


    for (auto it = svec.begin(); it != svec.end() && !it->empty(); ++it){
        for (auto &c : *it){
            c = toupper(c);
        }
        cout << *it << endl;
    }
    
    cout << endl << endl;
    system("pause");
    return 0;
}

//空字符串："",empty()函数检查是否是空字符串，而不是检查是否是空白字符串
//空白字符：' ', '\n', "\t",检查字符是否是空白字符，用cctype中的isspace()

//空白字符串判断
void if_is_empty(){
    string s;
    s = "";  //空字符串
    s = " "; //空白字符，非空字符串
    s = "\n"; ///空白字符，非空字符串
    s = "\t"; ///空白字符，非空字符串
    if (s.empty()){
        cout << "empty" <<endl;
    }else{
        cout << "not empty";
    }
}

//空白字符的判断
void if_is_space(){
    char c = '\t';
    if (isspace(c)){
        cout << "empty character" << endl;   
    }else{
        cout << "not an empty character" << endl;
    }
}