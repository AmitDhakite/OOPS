#include<bits/stdc++.h>
using namespace std;

class Complex
{
  public:
    int a, b;
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex operator+ (Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

class Integer
{
  public:
    int a;
    Integer()
    {
        a = 0;
    }
    Integer(int k)
    {
        a = k;
    }
    Integer operator++ ()
    {
        Integer temp;
        temp.a = ++a;
        return temp;
    }
    Integer operator++ (int)
    {
        Integer temp;
        temp.a = a++;
        return temp;
    }
};

int main()
{
    Complex A(1, 2);
    Complex B(2, 3);
    Complex C;
    C = A + B;
    cout<<C.a<<" "<<C.b<<endl;

    // Integer A(1);
    // Integer B;
    // // B = ++A;
    // B = A++;
    // cout<<"A: "<<A.a<<"\nB: "<<B.a<<endl;
    return 0;
}