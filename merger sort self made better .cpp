#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cont = 0;
void merge(vector<int>&a,int s,int mid, int e)
{
   int start = s;
   vector<int>k(e-s+1,0);
   int m = mid+1;
   int i;
   for(i =0;i<k.size();i++)
   {
      if(m>e || s>mid)break;
      if(a[s]<a[m] && s<=mid)
      {
         cont++;
         k[i] = a[s];
         s++;
      }
      else
      {
         if(m<=e)
         {
            cont++;
            k[i] = a[m];
            m++;
         }
      }
   }
   while(s<=mid)
   {
      k[i] = a[s];
      s++;
      i++;
   }
   while(m<=e)
   {
      k[i] = a[m];
      m++;
      i++;
   }
   for(int i = start,m=0;i<=e;i++,m++)
   {
      a[i] = k[m];
   }
}
void mergesort(vector<int>&a,int s, int e)
{
   if(s >= e)return;
   if(e-s==1){
      if(a[s]>a[e])
      {cont++;swap(a[s],a[e]);}
      return ;
   }
   int mid = (s+e)/2;
   mergesort(a,s,mid);
   mergesort(a,mid+1,e);
   merge(a,s,mid,e);
}
int main()
{
   vector<int>v{2,4,1,3,5};
   mergesort(v,0,v.size()-1);
   for(auto x:v)
   cout<<x<<" ";
cout<<endl<<cont;
   return 0;  
}