#include<bits/stdc++.h>
using namespace std;

class par
{
  public:
    int a;
    void operator= (par temp)
    {
        a = temp.a;
    }
};

int main()
{
    par A;
    A.a = 10;

    par B;
    B = A;
    cout<<B.a;
    return 0;
}