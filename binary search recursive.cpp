#include<bits/stdc++.h>
using namespace std;

int finder(vector<int>&v,int k,int e,int s = 0, int mid = 0)
{
     if(v[mid]==k)
     return mid;
     if(s+1 ==e)
     {
        if(v[s] ==k)
        return s;
        else if(v[e]==k)
        return e;
       else return -1;
     }
     if(k>v[mid])
     {
        finder(v,k,e,mid,(e+s)/2);
     }
     else
     finder(v,k,mid,s,(e+s)/2);

}

int main()
{
   vector<int>v{1,2,3,4,5,6,7};
   cout<<finder(v,3,7);


}