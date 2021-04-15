#include <iostream>
using namespace std;

void hanoi(int n, char src, char medium, char dest);

//例3-10汉诺威塔
int main(){
    int m;
    cout << "enter the number of diskes: ";
    cin >> m;
    cout << "the steps to moving " << m << " diskes: " << endl;
    hanoi(m, 'A', 'B', 'C');
    
    cout << endl << endl;
    system("pause");
    return 0;
}
/*
n=10时要执行多少次hanoi函数
1次，h(10)
2次，h(9)
4次，h(8)
8次，h(7)
...
512次，h(1)
合计：512+256+128+64+32+16+8+4+2+1 = 1023次
*/

void move (char src, char dest){
    cout << src  << "-->" << dest << endl;
}

void hanoi(int n, char src, char medium, char dest){
    if (n == 1){
        move(src, dest);   //递归最底层
    }else{
        hanoi(n-1, src, dest, medium);
        move(src, dest);
        hanoi(n-1, medium, src, dest);
    }
}

