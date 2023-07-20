#include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int>&v)
{
    int k = v.size()-1;
    int max = 0;
    vector<int>d;
    for(int i = k;i>=0;i--)
    {
        if(v[i]>max)
        {d.push_back(v[i]);max = v[i];}
    }
    return {d.rbegin(),d.rend()};
}
int main()
{
    vector<int>v{7,10,4,3,6,5,2};
    vector<int>d=leader(v);
    for(auto x:d)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}