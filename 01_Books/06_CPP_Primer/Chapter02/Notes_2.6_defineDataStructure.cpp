#include <iostream> 
#include <string>
#include "Sales_item.h"

using namespace std;


struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
};     //类定义结束需要有个分号

struct Foo
{
    /* data */
};    //类定义结束需要有个分号


int main()
{
    Sales_data data1, data2;

    double price;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo){
        unsigned total_cnt = data1.units_sold + data2.units_sold;
        double total_revenue = data1.revenue + data2.revenue;
        cout << data1.bookNo << " " << total_cnt << " " << total_revenue << endl;

        if (total_cnt != 0){
            cout << "average price " << total_revenue / total_cnt << endl;
        }else{
            cout << "no sales" << endl;
        }
        cout <<endl<<endl;
	    system("pause");
        return 0;
    }else{
        cerr << "ISBNs have to be the same" <<endl;
        system("pause");
        return -1;
    }
    
	
	// return 0;
	}


