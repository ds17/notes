#include <iostream>
using namespace std;

enum CPU_RANK {P1 =1, P2, P3, P4, P5, P6, P7, P8, P9};
enum RAM_TYPE {DDR1=1, DDR2, DDR3 ,DDR4};
enum INTERFACE_TYPE {SATA=1, USB};
enum INSTALL_STYLE {EXTERNAL=1, BUILT_IN};

class CPU
{
private:
    CPU_RANK rank;
    int frequency;
    float voltage;
public:
    CPU(CPU_RANK r, int f, float v);
    ~CPU();
    CPU_RANK GetRank() const {return rank;}
    int GetFrequency() const {return frequency;}
    float GetVoltage() const {return voltage;}

    void SetRank(CPU_RANK r) {rank = r;}
    void SetFrequency(int f) {frequency = f;}
    void SetVoltage(float v) {voltage = v;}
    void run() {cout << "CPU Running!\n";}
    void stop() {cout << "CPU stopped! \n";}
};

CPU::CPU(CPU_RANK r, int f, float v)
{
    rank = r;
    frequency = f;
    voltage = v;
    cout << "construct an CPU object.\n";
}

CPU::~CPU()
{
    cout << "destuct a CPU object. \n";
}

class RAM
{
private:
    RAM_TYPE type;
    int capacity;
    int frequency;

public:
    RAM(RAM_TYPE t, int c, int f);
    ~RAM();
};

RAM::RAM(RAM_TYPE t, int c, int f)
{
    type = t;
    capacity = c;
    frequency = f;
}

RAM::~RAM()
{
}

class CD_ROM
{
private:
    INSTALL_STYLE style;
    INTERFACE_TYPE type;
    int buffer_size;
public:
    CD_ROM(INTERFACE_TYPE t, int b, INSTALL_STYLE s);
    ~CD_ROM();
};

CD_ROM::CD_ROM(INTERFACE_TYPE t, int b, INSTALL_STYLE s)
{
    type = t;
    buffer_size = b;
    style = s;
}

CD_ROM::~CD_ROM()
{
}



int main(){
    CPU a(P6, 300, 2.8);
    a.run();
    a.stop();
    
    cout << endl << endl;
    system("pause");
    return 0;
}