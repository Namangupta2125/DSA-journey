#include<bits/stdc++.h>
using namespace std;
#define ll long long



void quicksort(vector<int>&v,int start,int end)
{
   
   if(start>=end)return;
   int  k =start-1;
   for(int i = start;i<end;i++)
   {
      if(v[i]<v[end])
      {
         k++;
         swap(v[k],v[i]);
      }
   }
   if(k==start-1){k = start; swap(v[start],v[end]);}
   else{
      k++;
      swap(v[k],v[end]);
   }
   quicksort(v,k+1,end);
   quicksort(v,start,k-1);
   
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