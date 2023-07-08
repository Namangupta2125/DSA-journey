#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define ld long double

bool issafe(string s,int j,int i)
{
    if(j==0)
    return true;
    if(s[j-1] == 'A' && s[i]=='B')
    return false;
    return true;
}
void permute(string s,int i=0)
{
    if(i==s.size())
   { cout<<s<<" ";
    return;}
    for(int j=i;j<s.size();j++)
    {
        if(issafe(s,j,i)==false)continue;
        char a =s[j];
        s[j]=s[i];
        s[i]=a;
        permute(s,i+1);
        a =s[j];
        s[j]=s[i];
        s[i]=a;
    }
}
int main()
{
    permute("ABC");
    return 0;
}