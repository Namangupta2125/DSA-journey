#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
   vector<int>v{4,1,9,5,6,3,7};
   int n = v.size();
   for(int i =0;i<n;i++)
   {
      int currentindex = i;
      int currentelement = v[i];
      while(currentindex>=1 && v[currentindex-1]>currentelement)
      {
         v[currentindex] = v[currentindex-1];
         currentindex--;
      }
      v[currentindex] = currentelement;
   }
   for(auto x:v)
   cout<<x<<" ";
   return 0;  
}