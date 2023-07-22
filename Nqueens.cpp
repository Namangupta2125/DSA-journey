#include<bits/stdc++.h>
using namespace std;

vector<vector<string>>v;

bool issafe(int n,vector<string>d,int i,int j)
{
    for(int a = 0;a<n;a++)
    {
        if(d[a][j] == 'Q')
        return false;
    }
    for(int a = 0;a<n;a++)
    {
        if(d[i][a] == 'Q')
        return false;
    }
    int r = i ,c = j;
    while(true)
    {
        if(d[r][c] == 'Q')
        return false;
        if(r == n-1 || c ==0)
        break;
        c--;r++;
        
    }
    c = j;r= i;
    while(true)
    {
        if(d[r][c] == 'Q')
        return false;
        if(c == 0 || r==0)
        {
            break;
        }
        r--;c--;
    }
    return true;
}
void solve(int n,vector<string>d ,int j = 0,int count = 0)
{
    if(j == n)
    {
        if(count == n)
        {
            v.push_back(d);
        }
        return ;
    }
    for(int i = 0;i<n;i++)
    {
        if(issafe(n,d,i,j) == true)
        {
            d[i][j] = 'Q';
            solve(n,d,j+1,count+1);
            d[i][j] = '.';
        }
    }
}

vector<vector<string>>oo(int n)
{
    vector<string>d;
    string a(n,'.');
    for(int i =0;i<n;i++)
    {
        d.push_back(a);
    }
    solve(n,d);
    return v;
}



int main()
{
    int n;cin>>n;
    vector<vector<string>>s = oo(n);
    for(auto x:s)
    {
        for(auto y:x)
        {
            cout<<y<<endl;
        }
        cout<<endl;
    }
    return 0;
}