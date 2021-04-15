#include <iostream>
using namespace std;
bool huiWen(unsigned x);

//例3-4 寻找回文数
int main(){
    for (unsigned m = 11; m<1000; m++){
        if (huiWen(m) && huiWen(m*m) && huiWen(m*m*m)){
            cout << "m= " << m ;
            cout << "m*m= " << m*m ;
            cout << "m*m*m= " << m*m*m << endl;
        }
    }
    
    cout << endl << endl;
    system("pause");
    return 0;
}


bool huiWen(unsigned x){
    // //自己想的
    // unsigned yuShu, newNum=0, origin_num, shang;
    // origin_num = x;
    // while ( x != 0)
    // {
    //     shang = x/10;
    //     yuShu = x % 10;
    //     newNum = newNum * 10 + yuShu;
    //     x = shang;
    // }
    // if (newNum == origin_num) return true; else return false;
    
    //例题答案
    unsigned i = x;
    unsigned m = 0;
    while ( i > 0){
        m = m *10 + i % 10;
        i /=10;
    }
    return m == x;
}