#include<bits/stdc++.h>
using namespace std;

class tar;
class par
{
  private:
    int a;
    friend void print(par, tar); // do not matter which access specifier is written
  public:
    par()
    {
        a = 10;
    }
};

class tar
{
  private:
    int b;
  public:
    tar()
    {
        b = 20;
    }
    friend void print(par, tar);
};

void print(par obj, tar pbj)
{
    cout<<obj.a<<" "<<pbj.b<<endl;
}

int main()
{
    par O;
    tar M;
    print(O, M);
    return 0;
}