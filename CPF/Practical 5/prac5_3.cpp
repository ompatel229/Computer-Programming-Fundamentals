#include<iostream>
using namespace std;
int main()
{
    cout<<"Numeric Pattern"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;
    cout<<"Right Half Number Triangle"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5-i; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;
    cout<<"Reverse Right Half Number Triangle"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=i-1; j>=1; j--)
        {
            cout<<"  ";
        }
        for(int k=1; k<=6-i; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;
    cout<<"Reverse Numeric Pattern"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int l=i; l>0; l--)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;
    cout<<"Reverse Numeric Pattern"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=5; j>i-1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;
    cout<<"Lowercase Alphabetical Pattern"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<char('a'+j-1)<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;
    cout<<"Uppercase Alphabetical Pattern"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
    }

cout<<endl;
cout<<endl;
    cout<<"Full Number Pyramid"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5-i; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<k<<" ";
        }
        for(int l=i-1; l>0; l--)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;
    cout<<"Full Alphabetical Pyramid"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5-i; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<char('A'+k-1)<<" ";
        }
        for(int l=i-1; l>0; l--)
        {
            cout<<char('A'+l-1)<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;
    cout<<"Reverse Numeric Pattern"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<6-j<<" ";
        }
        cout<<endl;
    }
}