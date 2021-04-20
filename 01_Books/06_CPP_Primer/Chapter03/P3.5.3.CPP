#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;
void compareTwoArray();

int main(){

//     int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     auto p1 = &ia[0], p2 = &ia[1];
//     // cout << p2 << endl;
//     // p1 += p2-p1;
//     // cout << p1 << endl;
//     // cout << *p1 << endl;


// //P3.35
//     for (int i = 0; i <=9; ++i){
//         auto p3 = p1 + i;
//         *p3 = 0;
//     }

    vector<int> a11 = {11,12,13,14};
    cout << typeid(a11).name() ;
    cout << "\n\n" ;
    system("pause");
    return 0;
}

//P3.36
void compareTwoArray(){
    int ia1[] = {1,1,1};
    int ia2[] = {1, 1, 2,1};
    size_t ia1_size = end(ia1) -begin(ia1);
    size_t ia2_size = end(ia2) -begin(ia2);

    if (ia1_size == ia2_size){
        for(size_t i = 0; i < ia2_size; i++){
            if (ia1[i] != ia2[i]){
                cout << "They are different arrays!\n";
                break;
            }

            if (i == ia1_size-1){
                cout << "They are same arrays!\n";
            }        
        }
        
    }else{
        cout << "They have different numbers of item!\n";
    }
}

