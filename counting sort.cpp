#include<bits/stdc++.h>
using namespace std;
#define ll long long


void countingsort(vector<int>&v)
{
   int size = *max_element(v.begin(),v.end());
   vector<int>count(size+1,0);
   for(int i =0;i<v.size();i++)
   count[v[i]]++;
   for(int i =1;i<count.size();i++)count[i] +=count[i-1];
   vector<int>output(v.size(),0);
   for(int i = v.size()-1;i>=0;i--)
   {
      output[count[v[i]]-1] = v[i];
      count[v[i]]--;
   }
   v = output;
}
int main()
{
   vector<int>v{0,1,1,0,0,2,1,0,1,2,0,1};
   countingsort(v);
   for(auto x:v)
   cout<<x<<" ";
   cout<<endl;
   return 0;  
}