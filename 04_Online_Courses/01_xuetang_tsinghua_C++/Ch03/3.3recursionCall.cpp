#include <iostream>
using namespace std;

//例3-8求n!
    unsigned factorial(int n){
        unsigned r;
        if (n == 0){
            r = 1;   //递归的最底层
        }else{
            r = n * factorial(n-1);
        }
        return r;
    }

    void ex3_8(){
        int n;
        cin >> n;
        cout << "n!= " << factorial(n) << endl;
    }

//例3-9 求组合
    int commbination(int n, int k){
        if (k > n){
            return 0;
        }else if (n == k || k == 0)
        {
            return 1;  //递归的最底层
        }else{
            return commbination(n-1, k) + commbination(n-1, k-1);
        }
        
    }

    void ex3_9(){
        int n, k;
        cout << "please enter two integers n and k: " ;
        cin >> n >> k;
        cout << "C(n, k) =  " << commbination(n, k) << endl;
    }


//例3-10汉诺威塔
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

    void ex3_10(){
        int m;
        cout << "enter the number of diskes: ";
        cin >> m;
        cout << "the steps to moving " << m << " diskes: " << endl;
        hanoi(m, 'A', 'B', 'C');
    }


int main(){

    // ex3_8();
    // ex3_9();
    ex3_10();

    cout << endl << endl;
    system("pause");
    return 0;
}






