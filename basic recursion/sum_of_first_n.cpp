#include<bits/stdc++.h>
using namespace std;

void parameterizedway(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    parameterizedway(i-1,sum+i);
}

int functionalway(int i)
{
    if(i==0)
    {
        return 0;
    }
    return i+functionalway(i-1);
}

int main()
{
    int n;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    cout<<functionalway(n);
}