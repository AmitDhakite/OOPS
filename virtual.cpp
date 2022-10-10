#include<bits/stdc++.h>
using namespace std;

class par
{
  public:
    int a;
    par()
    {
        cout<<"PARENT CONSTRUCTOR\n";
    }
    void virtual fun()
    {
        cout<<"Par"<<endl;
    }
};

class child : public par
{
  public:
    int b;
    child()
    {
        cout<<"CHILD CONSTRUCTOR\n";
    }
    void fun()
    {
        cout<<"Child"<<endl;
    }
};

int main()
{
    par *obj = new child();
    obj->fun();

    // par *obj1 = new child();
    // par *obj2 = new par();

    // obj1->fun();
    // obj2->fun();
    return 0;
}