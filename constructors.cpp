#include<bits/stdc++.h>
using namespace std;

class Amit
{
  public:
    int a, b;
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};

class Dhakite
{
  public:
    int a, b;
    Dhakite()
    {
        a = 10;
        b = 20;
    }
    Dhakite(Dhakite& k)
    {
        cout<<"In"<<endl;
        a = k.a;
        b = k.b;
    }
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    // Amit o1;
    // o1.a = 100;
    // o1.b = 200;
    // Amit o2 = o1;
    // o2.print();

    Dhakite o3;
    Dhakite o4 = o3;
    o4.print();

    return 0;
}