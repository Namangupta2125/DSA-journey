#include<bits/stdc++.h>
using namespace std;

int finder(vector<int>&v,int k)
{
    int s = 0 ,e = v.size()-1;
    while(s<=e)
    {
      int mid = (s+e)/2;
      if(v[mid]==k)
      return mid;
      else if(v[mid]<k)
      s = mid+1;
      else 
       e = mid-1;
    }
    return -1;

}

int main()
{
   vector<int>v{1,2,3,4,5,6,7};
   cout<<finder(v,9);


}