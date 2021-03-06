#include <iostream>
using namespace std;

class Clock
{
private:
    int hour = 1, minute = 1, second = 1;  //类内初始值
public:
    // Clock() = default;
    Clock(int newH, int newM, int newS);
    Clock():Clock(2, 2, 2){}    //委托构造函数
    ~Clock();
    void setTime(int newH, int newM, int newS);
    void showTime();
};

Clock::Clock(int newH, int newM, int newS):hour(newH), minute(newM), second(newS)
{ //构造函数：不能定义返回值类型，也不能有return
}

Clock::~Clock()
{
}

void Clock::setTime(int newH, int newM, int newS){
    hour = newH;
    minute = newM;
    second = newS;
}
void Clock::showTime(){
    cout << hour << ":" << minute << ":" << second;
}


int main(){

    Clock myClock;
    // myClock.setTime(8, 30, 30);
    myClock.showTime();
    cout << endl << endl;
    system("pause");
    return 0;
}

