#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define ld long double

int permute(string s,int i =0)
{
    if(i == s.length()-1)
    {
        cout<<s<<" ";
    }
    for(int j =i;j<s.size();j++)
    {   char a = s[i];
        s[i] = s[j];
        s[j] = a;
        permute(s,i+1);
         a = s[i];
        s[i] = s[j];
        s[j] = a;
    }
}
int main()
{
    permute("abc");
    return 0;
}