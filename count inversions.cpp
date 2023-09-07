#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cont = 0;
void merge(vector<int>&a,int s,int mid, int e)
{
   int start = s;
   int n = mid-s+1;
   vector<int>k(e-s+1,0);
   int m = mid+1;
   int i;
   for(i =0;i<k.size();i++)
   {

      if(m>e || s>mid)break;
      if(a[s]<a[m] && s<=mid){k[i] = a[s];s++;}
      else{
         if(a[m]<a[s] )
         {cont+=mid-s+1;}
         if(m<=e){k[i] = a[m];m++;}
         
      }
   }
   while(s<=mid)
   {
      k[i] = a[s];s++;i++;
   }
   while(m<=e)
   {k[i] = a[m];m++;i++;}
   for(int i = start,m=0;i<=e;i++,m++)a[i] = k[m];
   
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
   vector<int>v{2,5,8,11,3,6,9 ,13};
   mergesort(v,0,v.size()-1);
   for(auto x:v)
   cout<<x<<" ";
cout<<endl<<cont;
   return 0;  
}