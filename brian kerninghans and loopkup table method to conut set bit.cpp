#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define ld long double

int table[256];

//lookup table method
void inititalize()
{
    table[0] = 0;
    for(int i =1;i<256;i++)
    {
        table[i] = (i&1) + table[i/2];
        //cout<<table[i]<<endl;
    }
}

int countbit(int n)
{
    int res = table[n&0xff];
    n>>=8;
    res += table[n&0xff];
    n>>=8;
    res += table[n&0xff];
    n>>=8;
    res += table[n&0xff];
    n>>=8;
    return res;
}
//brian konringhan method
int setbitconuter(int n)
{
    int ans =0;
    while(n>0)
    {
        n &= (n-1);//brian curningum algorithm
        ans++;
    }
    return ans;
}
int main()
{
    inititalize();
    cout<<countbit(5);
    return 0;
}