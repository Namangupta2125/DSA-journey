#include<bits/stdc++.h>
using namespace std;


int main()
{
    int k;cin>>k;
    vector<int>v{1,1,1,0,0,0,1,1,1,0};
    int start = 0,end = 0,max1 = 0,zerocount =0;
    for(end = 0;end<v.size();i++)
    {
        if(v[end]==0)
        zerocount++;
        while(zerocount>k)
        {
           if(v[start]==0)
           zerocount--;
           start++;
        }
        max1 = max(max1,end-start+1);

    }
    cout<<max1<<endl;

}