#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int> vec;
    srand((unsigned) time (NULL));
    int a = 9, b = 100;
    for (int i =0; i!=10; i++)
    {
        vec.push_back((rand() % (b-a)) +a);  //生成 [a，b)之间的随机数
    }

    cout << "The generated vector is  \n";
    for (auto item: vec) cout << item << " " ;
    cout << "\n\n";

    cout << *vec.begin() << "\n";
    cout << *(vec.begin()) << "\n";

    cout << *vec.begin() + 1 << "\n";
    cout << (*(vec.begin())) + 1 << "\n";

    
    cout << "\n\n";
    system("pause");
    return 0;
}