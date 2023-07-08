#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define ld long double

void genstring(string s,int n,int i =0,string v="",map<int,char>mp ={{1,'A'},{2,'B'},{3,'C'},{4,'D'},{5,'E'},{6,'F'},{7,'G'},{8,'H'},{9,'I'},{10,'J'},{11,'K'},{12,'L'},{13,'M'},{14,'N'},{15,'O'},{16,'P'},{17,'Q'},{18,'R'},{19,'S'},{20,'T'},{21,'U'},{22,'V'},{23,'W'},{24,'X'},{25,'Y'},{26,'Z'}})
{
    if(i==n)
    {cout<<v<<endl;
    return;}
    genstring(s,n,i+1,v+(mp[s[i]-48]));
    if(i<=n-2)
    {
        int k = ((s[i]-48)*10)+s[i+1]-48;
        if(k<=26)genstring(s,n,i+2,v+(mp[k]));
    }
}
int main()
{
    genstring("123",3);
    return 0;
}