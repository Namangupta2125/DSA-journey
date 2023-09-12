#include<bits/stdc++.h>
using namespace std;
#define ll long long



void quicksort(vector<int>&v,int start,int end)
{
   if(start >= end)return;
   int s = start,e = end,k=s,element =  v[start];
   start++;
   while(start<=end)
   {
      while(v[start]<element)start++;
      while(v[end]>element)end--;
      if(end<=start)break;
      swap(v[start],v[end]);  
   }
   for(int i = s+1;i<=e;i++)
   {
      if(v[i]>=element)
      {
         k = i-1;
         v.insert(v.begin()+i,element);
         v.erase(v.begin()+s);
         break;
      }
   }
   if(k==s)
   {
      int max1 = *(max_element(v.begin()+s,v.begin()+e));
      if(max1 == element)
      {
         v.insert(v.begin()+e+1,element);
         v.erase(v.begin()+s);
         k = e;
      }
   }
   quicksort(v,s,k-1);
   quicksort(v,k+1,e);
}
int main()
{
   vector<int>v{4,3,1,7,5,9,7,0};
   quicksort(v,0,v.size()-1);
   for(auto x:v)
   cout<<x<<" ";
   cout<<endl;
   return 0;  
}