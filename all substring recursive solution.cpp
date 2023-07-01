#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define ld long double


vector<string> check(string v,vector<string>k = {""})
{
    if(v == "")
    return k;
    else{
        int n = k.size();
        for(int i =0;i<n;i++)
        {
            k.push_back(k[i]+v[0]);
        }
        deque<char>d{v.begin(),v.end()};
        d.pop_front();
        string c{d.begin(),d.end()};
        v =c;
        d.clear();
        c.clear();
        return check(v,k);

    }

}
int main()
{
    string k;
    cin>>k;
    vector<string>v = check(k);
    for(auto X : v)
    {
        cout<<X<<" ";
    }
        return 0;
}