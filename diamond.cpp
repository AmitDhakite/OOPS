#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
        void fun()
        {
            cout<<"A";
        }
};

class B: public A
{};

class C: public A
{};

class D: public B, C
{};

int main()
{
    D obj;
    obj.fun();
    // D obj;
    // obj.B::fun();
    return 0;
}

