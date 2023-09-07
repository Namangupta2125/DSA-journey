#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<int>merge (vector<int>a,vector<int>b)
{
   int c = 0,d = 0;
   vector<int>v;
   int k = 0;
   while(true)
   {
      if(a[c]<b[d])
      {
         if(v.empty() == true)
         {v.push_back(a[c]);k++;c++;continue;}
         if(v[k-1]!=a[c])
         {v.push_back(a[c]);k++;}
        c++; 
         
      }
      else 
      {
         if(v.empty() == true)
         {v.push_back(b[d]);k++;d++;continue;}
         if(v[k-1]!=b[d])
         {v.push_back(b[d]);k++;}
        d++; 
      }
      if(c==a.size() || d == b.size())break;
   }
   while(c<a.size()){if(v[k-1]!=a[c]){v.push_back(a[c]);k++;};c++;}
   while(d<b.size()){if(v[k-1]!=b[d]){v.push_back(b[d]);k++;}d++;}
   return v;
}
int main()
{
   vector<int>a = {10,20,20},b = {5,20,40,40};
   vector<int>v = merge(a,b);
   for(auto x:v)
   cout<<x<<" ";
   return 0;  
}