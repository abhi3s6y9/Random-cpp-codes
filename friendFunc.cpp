#include <iostream>
using namespace std;

class A
{
    int a,b;
    public:
        void setData(int x, int y)
        {
            a=x;
            b=y;
        }
        friend void fun(A);
};
void fun(A obj)
{
    cout<<"Sum of numbers "<<obj.a+obj.b;
}

int main()
{
    A a;
    a.setData(2,3);
    fun(a);
    
    return 0;
}
