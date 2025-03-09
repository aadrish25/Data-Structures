#include<bits/stdc++.h>
using namespace std;

void pattern2()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<(2*i)+1;k++)
        {
            cout<<"*";
        }
        for(int j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }
}

void pattern8()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<(2*5)-(2*i+1);k++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }
}

void pattern10()
{
    for(int i=1;i<=(2*5-1);i++)
    {
        int stars=i;
        if(i>5) stars=(2*5-i);
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern11()
{
    int start;
    for(int i=1;i<=5;i++)
    {
        if (i%2==0) start=0;
        else start = 1;
        for(int j=1;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

void pattern12()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=(2*3)-(2*i);j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern13()
{
    int num=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}

void pattern14()
{
    
    for(int i=1;i<=5;i++)
    {
        int ascii=65;
        for(int j=1;j<=i;j++)
        {
            cout<<char(ascii)<<" ";
            ascii=ascii+1;
        }
        cout<<endl;
    }
}

void pattern15()
{
    
    for(int i=1;i<=5;i++)
    {
        int ascii=65;
        for(int j=1;j<=5-i+1;j++)
        {
            cout<<char(ascii)<<" ";
            ascii=ascii+1;
        }
        cout<<endl;
    }
}

void pattern16()
{
    int ascii=65;
    
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<char(ascii)<<" ";
        }
        ascii=ascii+1;
        cout<<endl;
    }
}

void pattern17()
{
    
    
    for(int i=1;i<=5;i++)
    {
        int ascii=65;
        for(int j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            cout<<char(ascii);
            if(j>=i) ascii=ascii-1;
            else ascii++;
            
        }
        for(int j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18()
{
    for(int i=0;i<5;i++)
    {
        
        for(char j='E'-i;j<='E';j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern19()
{
    int spaces=0;
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=(5-i);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(5-i);j++)
        {
            cout<<"*";
        }
        spaces+=2;
        
        cout<<endl;

    }

    

    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<spaces;j++)
        {
            cout<<" ";
        }
       for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        spaces-=2;
        
        cout<<endl;

    }
}




int main()
{
    pattern12();
}
