#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int (&arrRef)[10] =a;
    for (auto item : arrRef){
        cout << item << "\n" ;
    }
    cout << "\n\n";
    system("pause");
    return 0;
}