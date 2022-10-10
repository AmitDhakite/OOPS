#include<bits/stdc++.h>
using namespace std;

class par
{
public:
    int* a;
    par(int k)
    {
        a = new int;
        *a = k;
    }
    par(par& k)
    {
        a = new int;
        *a = *(k.a);
    }
    void print()
    {
        cout<<*a<<endl;
    }
    void update(int k)
    {
        *a = k;
    }
};

int main()
{
    par a(10);
    par b = a;

    b.update(20);

    a.print();
    b.print();
    
    return 0;
}