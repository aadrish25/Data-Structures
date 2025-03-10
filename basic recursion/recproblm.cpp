#include<bits/stdc++.h>
using namespace std;

void f(int i,int n)
{
    if(i>n)return;
    cout<<"Toddy"<<endl;
    f(i+1,n);
}

void linearprint(int i,int n)
{
    if(i>n)return;
    cout<<i<<" ";
    linearprint(i+1,n);
}

void linearprintrev(int i,int n)
{
    if(i<1)return;
    cout<<i<<" ";
    linearprintrev(i-1,n);
}


void linearprintbacktrack(int i,int n)
{
    if(i<1)return;
    linearprintbacktrack(i-1,n);
    cout<<i<<" ";
}

void linearprintrevbacktrack(int i,int n)
{
    if(i>n)return;
    linearprintrevbacktrack(i+1,n);
    cout<<i<<" ";
}



int main()
{
    int n;
    cout<<"Enter the no of times to print: "<<endl;
    cin>>n;
    linearprintrevbacktrack(1,n);
}