#include<bits/stdc++.h>
using namespace std;




bool str_pal(int i,string &s,int n)
{
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
     return str_pal(i+1,s,n);
}

int main()
{
    string s;
    string s_duplicate=s;
    cout<<"Enter string: "<<endl;
    cin>>s;



    bool pal =str_pal(0,s,(s.length()));


    if(pal==true)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"no Palinrome"<<endl;
    }
    
   

    return 0;
}