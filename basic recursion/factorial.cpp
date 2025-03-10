#include<bits/stdc++.h>
using namespace std;

void parameterizedway(int i,int fact)
{
    if(i<1)
    {
        cout<<fact;
        return;
    }
    parameterizedway(i-1,fact*i);
}

int functionalway(int i)
{
    if(i==1)
    {
        return 1;
    }
    return i*functionalway(i-1);
}

int main()
{
    int n;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    cout<<functionalway(n);
}