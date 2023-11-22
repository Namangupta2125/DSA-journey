#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;ll k;cin>>n;cin>>k;
        k--;
        vector<int>v(n,0);
        for(int i = 0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        ll s =0,e = *max_element(v.begin(),v.end()),ans = -1;
        while(s<=e)
        {
            ll mid = (s+e)/2,count = k,starter = v[0];
            for(int i = 1;i<n;i++)
            {
               if(v[i]-starter >=mid)
               {
                 starter = v[i];
                 count--;
                }

            }
            if(count<=0){s = mid+1;ans= mid;}
            else e= mid-1;
        }
        cout<<ans<<endl;
    }
}