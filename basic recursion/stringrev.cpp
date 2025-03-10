#include<bits/stdc++.h>
using namespace std;




void str_rev(int i,string &s,int n)
{
    int temp;
    if(i>=n/2) return;
    swap(s[i],s[n-i-1]);
    str_rev(i+1,s,n);
}

int main()
{
    string s;
    string s_duplicate=s;
    cout<<"Enter string: "<<endl;
    cin>>s;



    str_rev(0,s,(s.length()));

    cout<<"The reversed string: "<<endl;
    cout<<s<<endl;

    if(s==s_duplicate)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"no Palinrome"<<endl;
    }
    
   

    return 0;
}