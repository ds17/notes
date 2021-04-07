#include <iostream> 
using namespace std;

int main()
{
//	P1.9
//	int sum = 0;
//	for (int val = 50; val<=100; ++val){
//		sum += val;
//	}
//	cout << sum<<endl; 

//	P1.10
//	for (int i=10; i>=0; --i){
//		cout << i <<endl;
//	}
	
//	P 1.11
	cout << "输入两个整数：";
	int v1 = 0, v2 =0;
	cin>> v1 >> v2;
	if (v1>v2){
		int temp = v2;
		v2 = v1;
		v1 = temp; //v1小 v2大 
	} 
	for(int i = v1; i<=v2; ++i)
	cout << i<<endl;	
		
	return 0;
	}
