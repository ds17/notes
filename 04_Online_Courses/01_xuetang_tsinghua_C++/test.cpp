#include <iostream>
using namespace std;

int main(){

    union 
    {
        int i;
        float j;
    };
    
    i =1;
    cout << &i << " " << endl;
    j = 2.0;
    cout << &i << " " << &j << endl;
    
    cout << endl << endl;
    system("pause");
    return 0;
}