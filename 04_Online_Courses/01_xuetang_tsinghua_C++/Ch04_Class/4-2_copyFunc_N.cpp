#include <iostream>
using namespace std;

/*
复制构造函数被调用的三种情况
定义一个对象时，以本类另一个对象作为初始值，发生复制构造；
return一个类的对象时，将return语句中的对象初始化一个临时无名对象，传递给主调函数，此时发生复制构造。
函数的形参是类的对象，调用函数时，将使用实参对象初始化形参对象，发生复制构造；
*/


class Point
{
private:
    int x, y;
public:
    Point(int xx =0 , int yy = 0){x = xx, y =yy; cout<< "calling the structor function"<<endl;}
    // Point():Point(1, 1){}  //默认的委托构造函数，如果前一个构造函数两个参数都指定了默认值，将有两个默认构造函数，发生冲突
    Point(const Point &p);
    
    void setX(int xx){x = xx;}
    void setY(int yy){y = yy;}

    int getX() const {return x;}
    int getY() const {return y;}
    ~Point();
};


Point::Point(const Point &p)
{
    x = p.x;
    y = p.y;
    cout << "calling the copy constructor" << endl;
}

Point::~Point()
{
}

void fun1(Point p){         //函数的形参是类的对象，调用函数时，将使用实参对象初始化形参对象，发生复制构造；
    cout << p.getX() << endl;
}

Point fun2(){
    Point a(11, 12);
    return a;  //将return语句中的对象初始化一个临时无名对象，传递给主调函数，此时发生复制构造。
}


int main(){

    Point a(4,5);   //调用构造函数
    Point a2;  //调用构造函数
    
    Point b(a);    //定义一个对象时，以本类另一个对象作为初始值，发生复制构造；
    // cout << b.getX() << " " << b.getY() << endl;

    fun1(b); 
    b =fun2();   

    cout << endl << endl;
    system("pause");
    return 0;
}