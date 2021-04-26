#include <iostream>
// #include <string>
// #include <cctype>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void myAnswer()
{
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < ivec.size(); ++i)
    {   
        ivec[i] = (ivec[i] % 2 == 0 )? ivec[i] : 2 * ivec[i] ;
    } 

    for (auto item : ivec)
    {
        cout << item << "\n";
    }
}

void officalAnswer()
{
    vector<int> ivec;
    const int sz = 10;

    //引入随机数
    srand((unsigned) time (NULL));
    cout << "The initail value of the vector is: \n";
    for (int i = 0; i < sz; ++i)
    {
        ivec.push_back(rand() % 100 );
        cout << ivec[i] <<"  ";
    }

    for (auto &val : ivec)   //要修改他的值，因此用引用
    {
        val = (val%2 != 0)? val *2 : val;
    }

    cout << "\n\nThe current value of the vector is: \n";
    for (auto item : ivec)
    {
        cout << item << "  ";
    }
}

int main()
{
    // myAnswer();
    officalAnswer();

    cout << "\n\n";
    system("pause");
    return 0;
}

