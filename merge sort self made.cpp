#include<bits/stdc++.h>
using namespace std;
#define ll long long


void mergersort(vector<int>&v , int s , int e)
{
   if(e<s)return ; 
   if(e-s ==1)
   {
      if(v[s]>v[e])
      swap(v[s],v[e]);
      return ; 
   }
   else if(s==e)
   return ; 
   else{
   if((e-s+1)%2==1)
   {
      mergersort(v,s,(s+e)/2);
      mergersort(v,(s+e)/2+1,e);
   }
   else{
      mergersort(v,s,(s+e)/2);
      mergersort(v,(s+e)/2+1,e);
   }
   int left = s;
   int right = (s+e)/2+1;
   vector<int>k(e-s+1,0);
   for(int i =0;i<=e-s;i++)
   {
        if(v[left]<v[right] && left<= (s+e)/2)
        {
            k[i] = v[left];
            left++;
        }
        else
        {
           if(right<=e)
           {
             k[i] = v[right];
             right++;
           }
        }
    }
    int start = s;
    for(int i =0;i<=e-s;i++,start++)
    {
       v[start] = k[i];
    }}
}
int main()
{
   vector<int>v{3,1,2,4,1,5,2,6,4};
   mergersort(v,0,v.size()-1);
   for(auto x:v)
   cout<<x<<" ";
   return 0;  
}