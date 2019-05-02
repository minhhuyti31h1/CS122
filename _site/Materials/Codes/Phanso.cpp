#include <iostream>
using namespace std;

class Phanso
{
    private:
        int tuso;
        int mauso;
    public:
        Phanso()
        {
            this->tuso = 0;
            this->mauso = 1;
        }
        Phanso(int tuso)
        {
            this->tuso = tuso;
            this->mauso = 1;
        }
        Phanso(int tuso,int mauso)
        {
            this->tuso = tuso;
            this->mauso = mauso;
        }
    
        //setters
        void setphanso(int a, int b){
            this->tuso = a;
            this->mauso = b;
        }
        void setTuso(int cc)
        {
            this->tuso = cc;
        }
    
        void setMauso(int ss)
        {
            this->mauso = ss;
        }
    
        //getters
        int getTuso()
        {
            return this->tuso;
        }
    
        int getMauso()
        {
            return this->mauso;
        }
    
        Phanso operator + (Phanso b)
        {
            Phanso kq;
            kq.setTuso(this->tuso*b.getMauso() + this->mauso*b.getTuso());
            kq.setMauso(this->mauso*b.getMauso());
            return kq;
        }

        void print()
        {
            cout<<this->tuso<<"/"<<this->mauso<<endl;
        }
};


int main()
{
    Phanso S(1);
    int n;
    cin>>n;
    for (int i = 2; i <= n; ++i)
    {
        S = S + Phanso(1,i);
    }
    S.print();
    return 0;
}
