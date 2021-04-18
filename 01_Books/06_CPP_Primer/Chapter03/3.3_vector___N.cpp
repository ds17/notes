#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    //3.3.1初始化
    vector<string> v5{"hi"};
    vector<string> v7(10);  //有10个默认初始化元素
    vector<string> v8{10, "hi"};  //想进行列表初始化，但是10不是string，因此列表初始化失败 → 构造向量

    cout << endl << endl;
    system("pause");
    return 0;
}