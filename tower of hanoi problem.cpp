#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define ld long double
int toh(int n,char from,char to,char aux)
{
    if(n==1)
    {
        cout<<"move 1 from "<<from<<" to "<<to<<endl;
        return 0;
    }
     toh(n-1,from,aux,to);
     cout<<"move "<<n<<" form "<<from<<" to "<<to<<endl;
     toh(n-1,aux,to,from);
}
int main()
{
    toh(2,'a','c','b');
    return 0;
}