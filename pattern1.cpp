#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;char uwu=65;
    for(int i=1;i<=a;i++)
    {
        for( int s=1;s<=i-1;s++)cout<<" ";
        for(int j=1;j<=a;j++)
        {
            if(i+j<=a+1)
            {
                if(i&1)
                {
                    cout<<uwu++<<" ";
                }
                else
                {
                    cout<<j<<" ";
                }
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<'\n';
        uwu=65;
    }

}
