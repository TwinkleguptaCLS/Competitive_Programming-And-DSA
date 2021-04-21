#include<iostream>
using namespace std;

class Base{
    protected:
        int x;
    public:
        Base(int a):x(a)
        {cout<<"Base\n";}
        void print(){
         cout<<x<<endl;}
};

class Derived : public Base
{
    private:
        int y;
    public:
        Derived(int a,int b): Base(a),y(b)
        {cout<<"Derived\n";}
        void print()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int main()
{
    Base B(10);
    B.print();
    Derived d(20,30);
    d.print();
    B.print();
    return 0;
}