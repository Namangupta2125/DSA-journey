#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
   vector<int>v{4,1,9,5,6,3,7};
   int n = v.size();
   for(int i =0;i<n-1;i++)
   {
      for(int j =0;j<n-1;j++)
      {
         if(v[j]>v[j+1])
         swap(v[j],v[j+1]);
      }
   }
   for(auto x:v)
   cout<<x<<" ";
   return 0;  
}