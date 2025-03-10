#include<bits/stdc++.h>
using namespace std;

void digitextraction()
{
    int N,lastdigit,count=0;
    cout<<"Enter the number: ";
    cin>>N;
    while(N>0)
    {
        lastdigit=N%10;
        count++;
        N=N/10;
        
    }
    cout<<"No of digits: "<<count<<endl;
}

void digitReversal()
{
    int N,lastdigit;
    int revNum=0;
    cout<<"Enter the number: ";
    cin>>N;
    while(N>0)
    {
        lastdigit=N%10;
        N=N/10;
        revNum=(revNum*10)+lastdigit;
        
    }
    cout<<"Digits in reverse order: "<<revNum<<endl;
}

void checkPalindrome()
{
    int N,lastdigit;
    int revNum=0;
    cout<<"Enter the number: ";
    cin>>N;
    int N_copy=N;
    while(N>0)
    {
        lastdigit=N%10;
        N=N/10;
        revNum=(revNum*10)+lastdigit;
        
    }
    if(N_copy==revNum)  cout<<"Palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
   
}


void Armstrong()
{
    int N,lastdigit;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>N;
    int N_copy=N;
    while(N>0)
    {
        lastdigit=N%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        N=N/10;
        
        
    }
    if(N_copy==sum)  cout<<"Armstrong"<<endl;
    else cout<<"Not Armstrong"<<endl;
   
}

void printDivisors()
{
    int N;
    vector<int> ls;
    cout<<"Enter the number: ";
    cin>>N;
    for(int i=1;i<=sqrt(N);i++)
    {
        if(N%i==0) 
        {
            ls.push_back(i);
            if((N/i)!=i)
            {
                ls.push_back(N/i);
            }
        }
        sort(ls.begin(),ls.end());
        

    }
    for(auto it: ls) cout<<it<<" ";
}


void primeCheck()
{
    int N;
    int cnt=0;
    cout<<"Enter the number: ";
    cin>>N;
    for(int i=1;i<=sqrt(N);i++)
    {
        if(N%i==0) 
        {
            cnt++;
            if((N/i)!=i)
            {
                cnt++;
            }
        }
    }
    if (cnt==2) cout<<"Prime";
}

void isPalindrome() {
        int x;
        cin>>x;
        int lastDig=0, revNum=0;
        int x_duplicate=x;
        if(x<0)x=(-1)*x;
        while(x>0)
        {
            lastDig=x%10;
            x=x/10;
            revNum=(revNum*10)+lastDig;
        }
        cout<<revNum;
        if(x_duplicate<0)revNum=revNum+'-';
        if(revNum==x)
        {
            cout<<"Palinrome";
        }
        else
        {
            cout<<"no";
        }

        
    }

int main()
{
    isPalindrome();
}
