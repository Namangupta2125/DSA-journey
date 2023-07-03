#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void merge(vector<int>&a,int l,int r,int mid)
{
    vector<int>v;
    int i = l,j= mid+1,k = r;
    while(i<=mid&&j<=k)
    {
        if(a[i]<a[j])
        v.push_back(a[i++]);
        else
        v.push_back(a[j++]);
    }
    while(i<=mid)
    {
        v.push_back(a[i++]);
    }
    while(j<=k)
    {
        v.push_back(a[j++]);
    }
    k =0;
    for(int i = l;i<=r;i++,k++)
    {
        a[i] = v[k];
    }
}
void mergesort(vector<int>&v,int l ,int r)
{
    if(l>=r)
    return;
    int mid = (l+r)/2;
    mergesort(v,mid+1,r);
    mergesort(v,l,mid);
    merge(v,l,r,mid);
}
int main()
{   
    vector<int>v{1,5,4,3,2};
    mergesort(v,0,v.size()-1);
    for(auto x:v)
    cout<<x<<" ";
    return 0;
}