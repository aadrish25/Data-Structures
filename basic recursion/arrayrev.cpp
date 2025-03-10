#include<bits/stdc++.h>
using namespace std;




void arr_rev(int i,int arr[],int n)
{
    int temp;
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    arr_rev(i+1,arr,n);
}

int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    arr_rev(0,arr,n);

    cout<<"The reversed array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}