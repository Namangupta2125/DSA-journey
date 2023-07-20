#include<bits/stdc++.h>
using namespace std;

int frequency(vector<int>&v)
{
    int m = v[0];
    int profit = 0;
    for(int i = 1;i<v.size();i++)
    {
        if(v[i]>m)
        {
            if(i == v.size()-1 || v[i]>v[i+1])
            {
                profit+=v[i]-m;
                if(i == v.size()-1)
                break;
                else
                m = v[i+1];
            }

        }
    }
    return profit;
}
int main()
{
    vector<int>v{10,20,30};
    cout<<frequency(v);
    return 0;
}