#include <iostream>
using namespace std;

enum MONTH {Jan=1, Feb, Mar, Apr, May, June, July, Aug, Sep, Oct, Nov, Dec};
class DATE
{
private:
    unsigned year;
    MONTH month;
    unsigned day;

public:
    DATE(unsigned y, MONTH m, unsigned d):year(y), month(m), day(d){}
    DATE():DATE(1900, Jan, 1){}

    DATE(DATE &d)
    {
        year = d.year;
        month = d.month;
        day = d.day;
        cout << "copy construct a date object~\n";
    }

    ~DATE(){ cout << "destruct a date object!\n";}
};


enum SEX_TYPE {MALE, FEMALE};
class People
{
private:
    unsigned int number;
    SEX_TYPE sex;
    DATE birthday;
    string id;

public:
    People(unsigned int n, SEX_TYPE s, DATE d,string i):number(n), sex(s), birthday(d), id(i){}
    People()
    {
        DATE d(1900, Jan, 1);
        birthday =d;
        number = 960000;
        sex = MALE;
        id = "31010019000101225X";
    }

    People(People &p)
    {
        number = p.number;
        sex = p.sex;
        birthday = p.birthday;
        id = p.id;
        cout << "copy construct a people object~\n";
    }

    ~People(){ cout << "destruct a people object\n";}

    void SetNumber(unsigned int n) {number =n;}
    void SetSex(SEX_TYPE s) {sex = s;}
    void SetBirthday(DATE d) { birthday = d;}
    void SetId(string i) {id = i;}
};



int main(){
    DATE birthday(1991, July, 25);
    unsigned number = 161536;
    SEX_TYPE sex = MALE;
    string id = "34262219910725100X";

    // People jj(11000,FEMALE, birthday, "310100X");
    People jr;
    jr.SetBirthday(birthday);
    jr.SetId(id);
    jr.SetNumber(number);
    jr.SetSex(sex);

    
    cout << "\n" << "\n";
    // system("pause");
    return 0;
}