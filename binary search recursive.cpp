#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define ld long double
int binarysearch(vector<int>v,int target , int l,int r)
{
    if(l+1 == r)
    {
        if(v[l] == target)
        return l;
        else if(v[r]==target)
        return r;
        else
        return -1;
    }
    int mid = (l+r)/2;
    if(v[mid] == target)
    return mid;
    if(target>v[mid])
    return binarysearch(v,target,mid,r);
    else
    return binarysearch(v,target,l,mid);

}
int main()
{
    
    vector<int>v{1,2,3,4,5,6};
    cout<<binarysearch(v,1,0,v.size()-1)<<endl;
    return 0;
}