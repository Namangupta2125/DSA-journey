#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
   vector<int>v{4,1,9,5,6,3,7};
   int n = v.size();
   for(int i =0;i<n;i++)
   {
      for(int j = i;j<n;j++){if(v[i]>v[j])swap(v[i],v[j]);}
   }
   for(auto x:v)
   cout<<x<<" ";
   return 0;  
}