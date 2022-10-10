#include<bits/stdc++.h>
using namespace std;

class par
{
  public:
    int a;
  protected:
    int c;
};

class par1
{
  public:
    int aa;
  protected:
    int cc;
};


class child : public par, public par1
{
  public:
    int b;
    void fun()
    {
        cout<<c;
    }
};

int main()
{
    
    child A;
    A.a = 10;
    cout<<A.a;

    return 0;
}