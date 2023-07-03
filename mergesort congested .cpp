#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int l,int r,int mid)
{
    vector<int>d;
    int i = l, j = mid+1;
    while(i<=mid&& j<=r)
    {
        if(v[i]<v[j])
        d.push_back(v[i++]);
        else
        d.push_back(v[j++]);
    }
    while(i<=mid)d.push_back(v[i++]);
    while(j<=r)d.push_back(v[j++]);
    for(int i = l,k=0;i<=r;i++,k++)v[i] = d[k];
}
void mergesort(vector<int>&v,int l,int r)
{
    if(l>=r)return;
    int mid = (l+r)/2;
    mergesort(v,l,mid);
    mergesort(v,mid+1,r);
    merge(v,l,r,mid);
}
int main()
{
    vector<int>v{1,2,1,1,3,4,59,8,9,8,4,3,2,1,3,4,5,6,5};
    mergesort(v,0,v.size()-1);
    for(auto x:v)
    cout<<x<<" ";
}