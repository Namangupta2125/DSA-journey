#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
// program to copy all set bit in given range
string FirstNonRepeating(string A){
		    map<char,int>mp;
		    string p;
		    queue<char>v;
            for(int i =0;i<A.size();i++)
            {
                mp[A[i]]++;
                v.push(A[i]);
                int k = v.size();
                for(int i =0;i<k;i++)
                {
                    if(mp[v.front()]!=1)
                    v.pop();
                }
                if(v.empty()==true)p.push_back('#');
                else
                p.push_back(v.front());
            }
		    return p;
		}
int main()
{
    cout<<FirstNonRepeating("zz");
    return 0;
}