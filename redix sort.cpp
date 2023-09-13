#include<bits/stdc++.h>
using namespace std;
#define ll long long


void countingsort(vector<int>&v,int exp)
{
   int size = INT_MIN;
   for(int i =0;i<v.size();i++)
   {size = max(size,(v[i]/exp)%10);}
   vector<int>count(size+1,0);
   for(int i =0;i<v.size();i++)
   count[(v[i]/exp)%10]++;
   for(int i =1;i<count.size();i++)count[i] +=count[i-1];
   vector<int>output(v.size(),0);
   for(int i = v.size()-1;i>=0;i--)
   {
      output[count[(v[i]/exp)%10]-1] = v[i];
      count[(v[i]/exp)%10]--;
   }
   v = output;
}
void redixsort(vector<int>&v)
{
   int max1 = *max_element(v.begin(),v.end());
   for(int exp =1;max1/exp>0;exp*=10)
   {
      countingsort(v,exp);
   }
}
int main()
{
   vector<int>v{300,306,60,102,1};
   redixsort(v);
   for(auto x:v)
   cout<<x<<" ";
   cout<<endl;
   return 0;  
}