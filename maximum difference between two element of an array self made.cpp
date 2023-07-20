#include<bits/stdc++.h>
using namespace std;

int  maxdiff(vector<int>&v)
{
    int max = *(v.end()-2);
    int max1 = -20000;
    for(int i = v.size()-2;i>=0;i--)
    {
        if(v[i]<max && max-v[i] > max1)
        {
            max1 = max-v[i];
        }
        if(v[i]>max)
        max = v[i];
    }
    return max1;
}
int main()
{
    vector<int>v{7,10,4,3,6,5,2};
    cout<<maxdiff(v);
    return 0;
}