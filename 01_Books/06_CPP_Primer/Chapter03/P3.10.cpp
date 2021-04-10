#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string s("**hey, *a* u/ [ok]?!"), temp;
    if (!s.empty()){
        for (decltype(s.size()) index = 0; index < s.size(); ++index){
            if (!ispunct(s[index])){
                temp += s[index];   //字符串 = 字符串 + 字符
            }
        }
    }
    cout << "string without punctuation: " << temp;

    

    cout << endl << endl;
    system("pause");
    return 0;
}