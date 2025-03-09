#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl;
    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]=hash[arr[i]]+1;
    }

    int q;
    cout<<"Enter the no of queries: ";
    cin>>q;
    cout<<endl;
    while(q>0)
    {
        int num;
        cout<<"Enter the number whose frequency you want to search: ";
        cin>>num;
        cout<<endl;

        cout<<hash[num]<<endl;
        q--;
    }
    return 0;

}