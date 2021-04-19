#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int xx =0, int yy =0);
    Point(Point &p);
    int getX(){return x;}
    int getY(){return y;}
    ~Point();
};

Point::Point(int xx =0, int yy =0)
{
    x = xx;
    y = yy;
}

Point::~Point()
{
}

Point::Point(Point &p){
    x = p.x;
    y = p.y;
}

class Line
{
private:
    Point p1, p2;
    double len;
public:
    Line(Point xp1, Point xp2);
    Line(Line &l);
    double getLen(){return len};
    ~Line();
};

Line::Line(Point xp1, Point xp2):p1(xp1), p2(xp2)
{
    cout << "calling constructor of Line" << endl;
    double x = static_cast<double>(xp1.getX() - xp2.getX());
    double y = static_cast<double>(xp1.getY() - xp2.getY());
    len = sqrt(x*x + y*y);
}

Line::Line(Line &l){
    cout << "calling the copy constructor of line" << endl;
    len =l.len;
    p1 = l.p1;
    p2 = l.p2;
}

Line::~Line()
{
}


int main(){
    Point myP1(1,1), myP2(4, 5);
    Line line(myP1, myP2);
    Line line2(line);
    cout << "The lenght of the line is: "  << line.getLen() << endl;
    cout << line2.getLen() << endl;
    
    cout << endl << endl;
    system("pause");
    return 0;
}