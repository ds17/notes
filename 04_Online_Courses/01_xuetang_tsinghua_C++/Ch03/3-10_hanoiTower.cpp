#include <iostream>
using namespace std;

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

