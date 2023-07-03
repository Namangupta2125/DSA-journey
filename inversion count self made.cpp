#include<bits/stdc++.h>
using namespace std;
int count(vector<int>v,int n,int i )
{
    if(n==-1)
    return 0;
    if(i == v.size())
    return count(v,n-1,n-1);
    int p = v[i]<v[n]?1:0;
    int cont = p + count(v,n,i+1);
    return cont;
}
int main()
{
    vector<int>v{1,4,5,2,3,1};
    cout<<count(v,v.size()-1,v.size());
    
}