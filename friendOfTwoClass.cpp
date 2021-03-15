#include <iostream>
using namespace std;

class B;
class A
{
    int a;
    public:
        void setData(int x)
        {
            a=x;
        }
        friend void fun(A, B);
};

class B
{
    int b;
    public:
        void setData(int y)
        {
            b = y;
        }
        friend void fun(A, B);
};

void fun(A obj1, B obj2)
{
    cout<<"Sum of numbers "<<obj1.a+obj2.b;
}

int main()
{
    A a;
    a.setData(2);
    B b;
    b.setData(3);
    fun(a,b);
    
    return 0;
}
