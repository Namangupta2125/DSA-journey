#include<bits/stdc++.h>
using namespace std;

//circular sum subarray
int normalsum(vector<int>v) // uses kadanes algorithm to find maximum of normal subarrays
{
    int res = v[0],maxending = v[0];
    for(int i =1;i<v.size();i++)
    {
        maxending = max(maxending+v[i],v[i]);
        res = max(maxending,res);
    }
    return res;
}
int circularsum(vector<int>v) // for all circular subarray first invert the sign of all element than find max(to find min sum) and than minus it from total sum
{
    int sum =0;
    for(int i =0;i<v.size();i++)
    {
        sum+=v[i];
        v[i]*=-1;
    }
    return sum+normalsum(v);
}


int main()
{
    vector<int>v{8,-4,3,-5,4};
    cout<<max(normalsum(v),circularsum(v));
}