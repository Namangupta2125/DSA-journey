#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define ld long double
bool done =false;

bool goforward(vector<vector<int>>v,int i,int j)
{
    if(i==v.size())
    return false;
    if(j==v[0].size())
    return false;
    if(v[i][j]==0)
    return false;
    return true;
    cout<<"yes\n";
}
void ratmaze(vector<vector<int>>v , int i=0,int j =0,int path =1)
{
   v[i][j] =2;
    if(i==v.size()-1 && j == v[0].size()-1)
    {
        if(done ==false)
        {cout<<"yes"<<endl;
        done =true;}
        for(auto x:v)
        {
            for(auto c:x)
            cout<<c;
            cout<<endl;
        }
        cout<<endl;
        return ;
    }
    v[i][j] =2;
    if(goforward(v,i,j+1)==false && goforward(v,i+1,j)==false && path == 1){cout<<"NO\n";return ;}
    if(goforward(v,i,j+1)==false && goforward(v,i+1,j)==false && path !=1){return ;}
   // cout<<"go\n";
    if(goforward(v,i,j+1)==true && goforward(v,i+1,j)==true){ratmaze(v,i,j+1,path+1);ratmaze(v,i+1,j,path+1);}
    if(goforward(v,i,j+1)==true && goforward(v,i+1,j)==false)ratmaze(v,i,j+1,path);
    if(goforward(v,i+1,j)==true && goforward(v,i,j+1)==false)ratmaze(v,i+1,j,path);

}
int main()
{
    vector<vector<int>>v = {{1,1,1},{1,0,1},{1,1,1}};
    ratmaze(v);
    return 0;
}