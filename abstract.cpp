#include<bits/stdc++.h>
using namespace std;

class par
{
  public:
    par()
    {
        this->a = a;
    }

    par(par& obj)
    {
      this->a = obj.a;
    }
    int a;
    virtual void fun()=0;
};

class child: public par
{
  public:
    int b;
    void fun()
    {
        cout<<"B"<<endl;
    }
};

int main()
{
    child A;
    child B = A;
    return 0;
}