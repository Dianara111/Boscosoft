#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a; cin>>a;
    reverse(a.begin(), a.end());
    for(int i=0;i<=a.size()-1;i++)
    {
        for(int j=0;j<=a.size()-1;j++)
        {
            if(j+i>=a.size()-1)
              {
               cout<<a[j+i-(a.size()-1)]<<" ";
              }
else
            {
              cout<<"  ";
            }
        }
        cout<<endl;
    }
}

