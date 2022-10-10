#include<bits/stdc++.h>
using namespace std;

class par
{
  public:
    int a;
    par(int k)
    {
        cout<<"Par const."<<endl;
        a = k;
    }
};

class child: public par
{
  public:
    int b;
    child(int a, int b) : par(a)
    {
        cout<<"Child Const."<<endl;
        this->b = b;
    }
};

int main()
{
    child obj(10, 20);
    cout<<obj.a<<" "<<obj.b<<endl;
    return 0;
}