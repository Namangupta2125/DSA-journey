#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;cin>>s;string p;cin>>p;
    map<char,int>a,b;
    for(int i = 0;i<26;i++)
    {char n = i+97;a[n] =0;b[n] = 0;}
    for(auto x:p)b[x]++;
    for(int i = 0;i<p.size();i++)a[s[i]]++;
    int count =0;
    for(int i = p.size();i<s.size();i++)
    {if(a==b){count+=1;}a[s[i-p.size()]]--;a[s[i]]++;}
    cout<<count<<endl;

}