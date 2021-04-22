#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    vector<int> ivec(10,1);
    cout << ivec.size() << "\n";
    ivec.push_back(2);
    cout << ivec.size() << "\n";

    cout << "\n\n";
    system("pause");
    return 0;
}