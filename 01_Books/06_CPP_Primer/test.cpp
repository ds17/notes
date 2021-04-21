#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    int i = 1;
    int *p = &i;
    int **pp = &p;

    cout << p <<"\n";
    cout << pp << "\n";
    cout << "\n\n";
    system("pause");
    return 0;
}