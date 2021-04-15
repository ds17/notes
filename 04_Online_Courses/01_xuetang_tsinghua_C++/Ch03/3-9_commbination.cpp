#include <iostream>
using namespace std;

//求组合
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

int main(){
    int n, k;
    cout << "please enter two integers n and k: " ;
    cin >> n >> k;
    cout << "C(n, k) =  " << commbination(n, k) << endl;
    
    cout << endl << endl;
    system("pause");
    return 0;
}