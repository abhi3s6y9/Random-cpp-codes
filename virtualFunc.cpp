#include <iostream>
using namespace std;

class A 
{
    public:
        virtual void fun()
        {
            cout<<"I am Base class";
        }
};
class B: public A 
{
    public:
        void fun()
        {
            cout<<"I am Derived class";
        }
};

int main()
{
    A *p, o1;
    B o2;
    p = &o2;
    p->fun();
    
    return 0;
}
