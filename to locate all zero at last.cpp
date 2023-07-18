#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{1,2,2,3,3,0,3,0,2,2,2,0 ,4,4,4};
    int count =0;
    for(int i =0;i<v.size();i++)
    {
        if(v[i]!=0)
        {
            swap(v[i],v[count]);
            count++;
        }
    }
    for(auto x:v)
    cout<<x<<" ";
}