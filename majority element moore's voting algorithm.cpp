#include<bits/stdc++.h>
using namespace std;

//majority element - an element which appears more than n/2 times
// by using map datatype
int majorityelement(vector<int>v)
{
    map<int,int>mp;
    for(int i =0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    for(int i = 0;i<v.size();i++)
    {
        if(mp[v[i]]>v.size()/2)
        return v[i];

    }
    return -1;
}


// by using moore's voting algorithm
bool checkme(vector<int>v,int a) //check function for last elemetn
{
    int count =0;
    for(int i =0;i<v.size();i++)
    {
        if(v[i] == a)
        count++;
    }
    return count>v.size()/2?true:false;
}
// main function for moore's algo
int moore(vector<int>v)
{
    int count =1;
    int me = v[0];
    for(int i =1;i<v.size();i++)
    {
        if(v[i]!=me)
        {
            count--;
        }
        else
        count++;
        if(count ==0)
        {
            count =1;
            me = v[i];
        }
    }
    if(checkme(v,me)==true)
    return me;
    else
    return -1;
}
int main()
{
    vector<int>v{8,8,8,-5,4};
    cout<<majorityelement(v)<<endl<<moore(v)<<endl;
    
}