
#include<iostream>
using namespace std;

class Phanso
{
private:
    /* data */
    int tuso;
    int mauso;
public:
    Phanso(/* args */);
    Phanso(int);
    Phanso(int,int);
    //setters
    bool setTuso(int);
    bool setMauso(int);
    //getters
    int getTuso()const;
    int getMauso()const;
    //methods
    void toiGian();
    //operators
    Phanso operator+ (const Phanso & a)const;
    Phanso operator- (const Phanso & a)const;
    Phanso operator* (const Phanso & a)const;
    Phanso operator/ (const Phanso & a)const;
    void operator+= (const Phanso & a);
    void operator-= (const Phanso & a);
    void operator*= (const Phanso & a);
    void operator/= (const Phanso & a);
    Phanso operator ++();
    Phanso operator ++(int);
    ~Phanso();
};

Phanso::Phanso(/* args */)
{
    this -> tuso = 0;
    this -> mauso = 1;
}

Phanso::~Phanso()
{
}
