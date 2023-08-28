#include<bits/stdc++.h>
using namespace std;
#define ll long long

int peak_element(vector<int>&v)
{
   int s = 0,e = v.size()-1;
   while(s<=e)
   {
      int mid = (s+e)/2;
      if(v[mid]>v[mid-1] && v[mid] >v[mid+1])
      return v[mid];
      else if(v[mid]>v[mid-1])
      s = mid+1;
      else
      e = mid-1;
   }
   return -1;
}

int main()
{
   vector<int>v{10,15,20,3,5};
   cout<<peak_element(v);
   
}