#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){
    vector<int> ivec(10,3);
    for (auto it =ivec.begin(); it!=ivec.end(); ++it){
        *it = (*it) *2 ;
        cout << *it << endl;
    }

    
    cout << endl << endl;
    system("pause");
    return 0;
}