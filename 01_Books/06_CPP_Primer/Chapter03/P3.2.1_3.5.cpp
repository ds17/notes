#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, s_t, s_t_space;
    while (cin >> s){
        if (s.empty()){
            cout << "please input an unempty string" << endl;
        }else{
            s_t += s;
            s_t_space += s + " ";
        }
    }
    cout << "link without space: " << s_t << endl;
    cout << "link with space: " << s_t_space << endl;

    cout << endl << endl;
    system("pause");
    return 0;
}