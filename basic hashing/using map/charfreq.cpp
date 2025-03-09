#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<endl;

    map<int,int> mpp;
    for(int i=0;i<s.size();i++)
    {
        mpp[s[i]-'a']+=1;
    }


    int q;
    cout<<"Enter no of queries: ";
    cin>>q;
    cout<<endl;

   while(q>0)
   {
    char c;
    cout<<"Enter the character whose frequency you want: ";
    cin>>c;
    cout<<endl;

    cout<<"Frequency: ";
    cout<<mpp[c-'a'];
    cout<<endl;
    q--;
   }
}