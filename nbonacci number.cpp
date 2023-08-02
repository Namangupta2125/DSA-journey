#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;cin>>n>>m;
    vector<int>v;
    if(m<=n)
    {for(int i = 0 ;i<m-1;i++)v.push_back(0);
    if(m<n)v.push_back(0);
    else if(m==n)v.push_back(1);
    for(auto x:v)cout<<x<<" ";
    cout<<endl;
    }
    else{
        for(int i = 0;i<n;i++)
        {
            if(i==n-1)v.push_back(1);
            else v.push_back(0);
        }
        int count =1;
        m-=n;
        for(int i = n;i<m+n;i++)
        { v.push_back(count);
            count+=v[i]-v[i-n];
        }
        for(auto x:v)cout<<x<<" ";
    cout<<endl;
    }

}