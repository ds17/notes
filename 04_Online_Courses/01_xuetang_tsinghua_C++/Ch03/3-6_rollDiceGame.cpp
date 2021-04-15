#include <iostream>
#include <cmath>
using namespace std;

//例3.6掷骰子游戏

int rollDice(){
    int die1 = 1 + rand() % 6;  //rand返回一个随机的整数
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;

    return sum;
}

int main(){
    int sum, myPoint;
    unsigned seed;
    enum GameStatus {WIN, LOSE, PLAYING};
    GameStatus status;

    cout << "please enter an unsigned integer: ";
    cin >> seed;
    srand(seed);
    sum = rollDice();

    switch (sum)
    {
    case 7:
    case 11:
        status = WIN;
        break;
    case 2:
    case 3:
    case 12:
        status = LOSE;
        break;
    default:
        status = PLAYING;
        myPoint = sum;
        cout << "point is " << myPoint << endl;
        break;
    }

    while (status == PLAYING)
    {
        sum = rollDice();
        if (sum == myPoint){
            status = WIN;
        }else if (sum == 7)
        {
            status = LOSE;
        }
    }

    if (status == WIN)
    {
        cout << "player wins" << endl;
    }else{
        cout << "player loses" << endl;
    }

    
    cout << endl << endl;
    system("pause");
    return 0;
}