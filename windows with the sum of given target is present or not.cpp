#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&v,int target)
{
    int count =0;
    int index =0;
    for(int i =0;i<v.size();i++)
    {
        
        if(count == target)
        break;
        count+=v[i];
        while(count>target)
        {
            count-=v[index];
            index++;
        }
    }
    if(count == target)
    return true;
    else
    return false;
}
int main()
{
    vector<int>v{1,4,20,3,10,5};
    cout<<check(v,33)<<endl;
    
}