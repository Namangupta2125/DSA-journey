#include<bits/stdc++.h>
using namespace std;


int trapping_rain_water(vector<int>v)
{
     if(v.size()<3)
    return 0;
    vector<int>l;
    vector<int>r;
    l.push_back(v[0]);
    int max1 = v[0];
    for(int i =1 ;i<v.size();i++)
    {
        l.push_back(max(max1,v[i]));
        max1 = max(max1,v[i]);
    }
    max1 = *(v.end()-1);
    r.push_back(max1);
    for(int i = v.size()-2;i>=0;i--)
    {
        r.push_back(max(max1,v[i]));
        max1 = max(max1,v[i]);
    }
    reverse(r.begin(),r.end());
    int rain = 0;
    for(int i = 0;i<v.size();i++)
    {
        rain+= (min(l[i],r[i]))- v[i];
    }
    return rain;
}
int main()
{
    vector<int>v{4,2,0,3,2,5};
    cout<<trappping_rain_water(v);
    return 0;
}