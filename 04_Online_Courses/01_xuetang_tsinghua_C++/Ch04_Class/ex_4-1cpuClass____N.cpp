#include <iostream>
using namespace std;

enum CPU_RANK {P1 =1, P2, P3, P4, P5, P6, P7, P8, P9};
class CPU
{
private:
    CPU_RANK rank;
    int frequency;
    float voltage;
public:
    CPU(CPU_RANK r, int f, float v){
        rank = r;
        frequency = f;
        voltage = v;
        cout << "construct an CPU object.\n";
    }
    CPU(){}

//拷贝构造函数
    CPU(CPU &c)
    {
        rank = c.rank;
        frequency = c.frequency;
        voltage = c.voltage;
        cout << "copy struct a cpu object!\n";
    }
    ~CPU(){cout << "destuct a CPU object. \n";}

    CPU_RANK GetRank() const {return rank;}
    int GetFrequency() const {return frequency;}
    float GetVoltage() const {return voltage;}

    void SetRank(CPU_RANK r) {rank = r;}
    void SetFrequency(int f) {frequency = f;}
    void SetVoltage(float v) {voltage = v;}

    void run() {cout << "CPU Running!\n";}
    void stop() {cout << "CPU stopped! \n";}
};

enum RAM_TYPE {DDR1=1, DDR2, DDR3 ,DDR4};
class RAM
{
private:
    RAM_TYPE type;
    int size; //GB
    int frequency;  //MHz

public:
    RAM(RAM_TYPE t, int s, int f)
    {
        type = t;
        size = s;
        frequency = f;
        cout << "construct a ram! \n";
    }
    RAM(){}
    ~RAM(){cout << "destruct a ram object \n";}

    RAM_TYPE GetType() const {return type;}
    int GetSize() const {return size;}
    int GetFrequency() const {return frequency;}

    void SetType(RAM_TYPE t) { type = t;}
    void SetFrequency(int f) { frequency = f;}
    void SetSize(int s) {size = s;}

    void run() { cout << "ram starts running! \n";}
    void stop() { cout << "ram stopped! \n";}

};

enum INTERFACE_TYPE {SATA=1, USB};
enum INSTALL_STYLE {EXTERNAL=1, BUILT_IN};
class CD_ROM
{
private:
    INSTALL_STYLE style;
    INTERFACE_TYPE type;
    unsigned cache_size; //MB
public:
    CD_ROM(INTERFACE_TYPE t, int c, INSTALL_STYLE s)
    {
        type = t;
        cache_size = c;
        style = s;
        cout << "construct a cd_rom object. \n";
    }
    CD_ROM(){}
    ~CD_ROM(){ cout << "destruct a cd_rom! \n";}

    void SetInterfaceType(INTERFACE_TYPE t) { type = t;}
    void SetInstallStyle(INSTALL_STYLE s) { style = s;}
    void SetCacheSize(unsigned c) { cache_size = c;}

    INTERFACE_TYPE GetInterfaceType() const { return type;}
    INSTALL_STYLE GetInstallStyle() const { return style;}
    unsigned GetCacheSize() const { return cache_size;}

    void run() { cout << "cd_rom running!\n";}
    void stop() {cout << "cd_rom stopped! \n";}
};


class Computer
{
private:
    CPU cpu;
    RAM ram;
    CD_ROM cdRom;
    unsigned int storage_size; //GB
    unsigned int bandwidth; //MB

public:
    Computer(CPU c, RAM r, CD_ROM cd, unsigned int s, unsigned int b);

    Computer()
    {
        cpu = {P6, 2048, 5.0};
        ram = {DDR4, 512, 1600};
        cdRom = {SATA, 128, BUILT_IN};
        storage_size = 111;
        bandwidth = 100;
    }
    ~Computer(){cout << "destruct a computer!\n";}

    void run() 
    {
        cpu.run();
        ram.run();
        cdRom.run();
        cout << "Computer running!\n";
    }
    void stop() 
    {
        cpu.stop();
        ram.stop();
        cdRom.stop();
        cout << "Computer stopped!\n";
    }
};

//cpu ram cdrom分别两次调用拷贝构造函数，
Computer::Computer(CPU c, RAM r, CD_ROM cd, unsigned int s, unsigned int b):   //第一次形实结合调用
                    cpu(c), ram(r), cdRom(cd), storage_size(s), bandwidth(b)    //第二次调用：初始化列表列表拷贝构造
{
    cout << "struct a computer \n";
}

int main()
{
    CPU a(P1, 64, 2.8);
    a.run();
    a.stop();
    cout << "*********************\n";


    RAM r(DDR1,256, 600);
    r.run();
    r.stop();
    cout << "*********************\n";

    CD_ROM cd(USB, 16, EXTERNAL);
    cd.run();
    cd.stop();
    cout << "*********************\n";

    Computer comp2(a, r, cd, 128, 10);
    cout << "*********************\n";

    comp2.run();
    comp2.stop();
    cout << "*********************\n";

   
    
    // cout << "\n" << "\n";
    // system("pause");
    return 0;
}