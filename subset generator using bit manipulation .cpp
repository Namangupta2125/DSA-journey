#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define ld long double
string binarytostring(int n,string s)
{
    string k;
    int count =0;
    while(n!=0)
    {
        if(n&1==1)
        {
            k.push_back(s[count]);
        }
        n>>=1;
        count++;
    }
    return k;
}
void subsetgenerator(string s)
{
    for(int i =0;i<(2<<s.size()-1);i++)
    {
        cout<<binarytostring(i,s)<<endl;
    }
}
int main()
{
    subsetgenerator("abc");   
    return 0;
}