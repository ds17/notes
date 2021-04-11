#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    // P3.17
    // vector<string> svec;
    // string item;
    // while (cin >> item){
    //     svec.push_back(item);
    // }

    // cout << "to upper: " << endl;

    // for (auto item : svec){   
    //     for (auto &c : item){
    //         c = toupper(c);
    //     }
    //     cout << item << endl;
    // }    
    // cout << "last cin item is: " << item << endl;      //输出小写，for 区域内的item不影响，main下的item


    //P3.19
    // vector<int> v1(10, 42);
    // vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    // vector<int> v3;
    // for (int i = 0; i < 10; ++i){
    //     v3.push_back(42);
    // }
    // if (v2== v1 && v2 == v3)
    //     cout << "true";

    //p3.20.1
    vector<int> ivec;
    int val;
    while (cin >> val){
        ivec.push_back(val);
    }

    decltype(ivec.size()) vec_size = ivec.size();
    cout <<" there are " << vec_size << " numbers in ivec" <<endl;
    for (int index = 0; index < vec_size-1; ++index ){
        cout << "The " << index +1 << "th item + " << index + 2 << "th item is: " << ivec[index] + ivec[index+1] << endl;  
    }

    for (int index = 0; index < vec_size/2; ++index){
        cout << "The " << index +1 << "th item plus " << vec_size -index << "th item is: " << ivec[index] + ivec[vec_size-1-index] << endl;
    }



    cout << endl << endl;
    system("pause");
    return 0;
}