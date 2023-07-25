#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{8,-4,3,-5,4};
    int maxending = v[0],res = v[0];
    for(int i =1;i<v.size();i++)
    {
        maxending = max(maxending+v[i],v[i]);
        res = max(res,maxending);
    }
    cout<<res<<endl;
}