#include<iostream>
using namespace std;

/*class Complex{
    private:
        int real,imag;
    public:
        Complex()
        {
            real=0;imag=0;
        }
        Complex(int r,int i)
        {
            real =r;
            imag =i;
        }
        void print() 
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        // operator overloading
        Complex operator +(Complex c)
        {
            Complex temp;
            temp.real = real+c.real;
            temp.imag = imag+c.imag;
            return temp;
        }
       
};

int main()
{
    Complex c1(5,4);
    Complex c2(2,3);
    Complex c3;
    //Complex c3(1,5);
   // Complex c4; 

    c3=c1+c2;   // c1.add(c2);
    // int x=5;
    // int y=4;
    // int z =x+y;
    c3.print();

    //c4 =c1+c2+c3;
    //c4.print();

    return 0;
}*/

class Weight{
    private:
        int kg;
    public:
        Weight()
        {
            kg=0;
        }
        Weight(int x)
        {
            kg=x;
        }
        void print()
        {
            cout<<"Weight: "<<kg<<endl;
        }
        void operator ++()//pre
        {
            ++kg;
        }
        void operator ++(int) //post
        {
            kg++;
        }
        void operator --()//pre
        {
            --kg;
        }
        void operator --(int) //post
        {
            kg--;
        }
};

int main()
{
    Weight obj(1);
    ++obj;
    obj.print();
    obj++;
    obj.print();
    obj--;
    obj.print();
    --obj;
    obj.print();

    return 0;
}