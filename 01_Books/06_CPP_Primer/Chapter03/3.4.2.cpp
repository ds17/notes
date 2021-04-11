#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    vector<int> ivec(3, 3);
    auto end_it = ivec.end();
    auto end_it2 = ivec.begin() + 4;

    cout << endl << endl;
    system("pause");
    return 0;
}