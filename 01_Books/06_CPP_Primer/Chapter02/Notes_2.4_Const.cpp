#include <iostream> 
#include "Sales_item.h"

using namespace std;

int const1(), const2(), pointerVSconst(), reference2const(), topLowConst();
int main()
{
    // const1();
    // const2();
    pointerVSconst();

	cout <<endl<<endl;
	system("pause");
	return 0;
	}

//常量的引用
int reference2const(){
    //常量引用允许等号两边类型不一致 → 类型转换
    double val =3.14;
    const int &ri = val; //发生类型转换，编译时产生一个整型的临时量


    int i = 42;
    const int &r1 = i;     //正确
    const int &r2 = 4.12;   //正确
    const int &r3 = r1 *2;   //正确：常量引用的初始值可以是任意表达式或初始值
    // int &r4 = r1 *2;  //错误：非常量引用的类型必须一致，等号右边的类型是一个常量引用
    // int &r5 = 4;  //错误：非常量引用的初始值类型必须为左值

    return 0;
}

int const1(){
    int i =42;
    int &r1 = i;
    const int &r2 = i;

    cout << r2<< endl; //输出：42
    r1 = 0;

    cout << i <<endl; //输出：0
    cout << r2 << endl; //输出：0，因为初始化时类型一致，所以没有产生临时量，引用的一直是对象i
    return 0;
}

int const2(){
	double val =3.14;
    const int &r1 = val;
    val = 6.28;  //被引用对象本身是可以变化的

    cout <<  r1 << endl;   //输出：3，因为初始化时类型不一致，发生类型转换，实际引用的是一个临时对象
    cout << val;  //输出：6.28

    return 0;
}

//2.3.4指针和常量
int pointerVSconst(){

    //指向常量的指针
    const double pi = 3.14;
    const double *ptr_pi = &pi; //这是一个指向常量的指针,pointer to const，用于存放常量的地址

    //指针的类型必须与其所指对象一样的例外（一）
    double val =3.14;
    const double *cptr = &val;   //这是一个指向常量的指针，例外：允许一个指向常量的指针指向一个非常量对象
    //指向常量的指针仅仅要求：不能通过该指针改变对象的值，自以为是的指针
    //对常量指针解引并赋值是错误的，因为编译器认为指向常量的指针指向的对象应该是一个常量，所以不允许赋值
    cout << cptr <<endl;

    //常量指针
    double di = 1.11;
    double *const ptr_di = &di; //一个指向di的常量指针

    const double c_di = 1.11;
    const double *const ptr_c_di = &c_di; //一个指向双精度常量对象的常量指针，从右往左阅读

    return 0;
}

//顶层、底层const
//顶层const：对象本身是个常量
//底层const：指针所指对象是一个常量
int topLowConst(){
    int i = 0;
    int *const p1 = &i;  //不允许改变p1的值，这个一个顶层const
    const int ci = 42;   //不允许改变ci的值，这是一个顶层const
    const int *p2 = &ci; //允许改变p2的值，这是一个底层const
    const int &r = ci;  //声明引用的const都是底层const
}