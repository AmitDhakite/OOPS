#include<bits/stdc++.h>
using namespace std;

struct Node{
    int a;      // size: 4 bytes
    char b;     // size: 1 bytes
    float c;    // size: 4 bytes
};

union Node1{
    int a;      // size: 4 bytes
    char b;     // size: 1 bytes
    float c;    // size: 4 bytes
    // at one time, only one of the above 3 vars will be in use
    // if we try to access the one which is not in use, then it 
    // will give garbage values.
};

// It will take only 4 bytes of memory, while struct takes 4 * 3 = 12 bytes

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node obj1;
    Node1 obj2;


    cout<<sizeof(obj1)<<" "<<sizeof(obj2)<<endl;

    Node obj;
    obj.a = 10;
    obj.c = 20.0;

    cout<<obj.a;
    cout<<endl;
    cout<<obj.c;
    
    return 0;
}