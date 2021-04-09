#include <iostream>
#include "Sales_data.h"
#include <string>

using namespace std;

int main()
{
    Sales_data total;
    double price;
    if (cin >> total.bookNo >> total.units_sold >> price){      //从输入流中提取3个值
        total.revenue = total.units_sold * price; 
        Sales_data trans;
        
        while (cin >> trans.bookNo >> trans.units_sold >> price){   //每次从输入流中提取3个值
            trans.revenue = trans.units_sold * price;
            if (trans.bookNo == total.bookNo){
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }else{
                //输出：ibsn 销售数量 均价
                cout  << endl << total.bookNo << " " << total.units_sold << " " << total.revenue / total.units_sold << endl;
                total = trans;
            }
        }
        cout << endl << total.bookNo << " " << total.units_sold << " " << total.revenue / total.units_sold << endl;
    }else{
        cerr << "No data?!" << endl;
    }

	
	cout <<endl<<endl;
	system("pause");
	return 0;
	}