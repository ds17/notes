#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){
    //P3.21
    vector<int> ivec;
    int val;
    while (cin >> val){
        ivec.push_back(val);
    }

    //错误的for
    // for (auto it = ivec.cbegin(); it != (ivec.cend()); ++it ){    
    // //last_it != --ivec.cend() 将引发错误，须在递减运算上加一个括号，因为 -- 其实是个赋值运算    
    //     cout << *it + *++it << endl;
        
    //     if ( it != ivec.cend()){      
    //         //死循环，因为指向容器内容的最后一个迭代器，不是end()迭代器，end()指向尾元素的下一位置
    //         //当倒数第二个和最后一个元素相加后，it之上最后一个元素，这时不等于end(),继续 --it,然后继续执行for循环中的 ++it,又指向最后一个元素
    //         //下一个循环，将把最后一个元素，和end()内存中的内容相加，结果不可预计
    //         //这时it已经指向end()，执行for循环中的++it，这时it指向end()的下一位置，也不等end()，继续循环，进而永远也不可能到end()，死循环
    //         //因此采用while循环更为合适
    //          --it;
    //     }
    // }

    //正确的for循环实现，用1个迭代器
    // auto last_it = (--ivec.cend());    //获取最后一个元素的迭代器
    // for (auto it = ivec.cbegin(); it != --ivec.cend(); ++it){
    //     cout << *it + *++it << endl;
    //     --it;
    // }

    //while实现，用两个迭代器
    // auto it1 = ivec.cbegin();
    // auto it2 = ++ivec.cbegin();
    // while (it2 != ivec.cend()){    //sring 和 vector 的迭代器可以比较大小，见3.4.2迭代器运算
    //     cout << *it1 + *it2 << endl;
    //     ++it1;
    //     ++it2;
    // }

    //输出第一个数和倒数第一个数的和，以此类推
    auto it1 = ivec.cbegin();
    auto it2 = --ivec.cend();
    for (decltype(ivec.size()) i = 0; i <= ivec.size()/2; ++i ){
        cout << *it1 + *it2 << endl;
        ++it1;
        --it2;
    }
    
    cout << endl << endl;
    system("pause");
    return 0;
}