#include<bits/stdc++.h>
using namespace std;
#define ll long long

void findstring(string a,string b)
{
	if(a.size()<b.size())
	{cout<<-1<<endl;
    return;}
	unordered_map<char,int>mp;
	unordered_map<char,int>mp1;
	for(int i = 0;i<b.size();i++)
	{
		mp1[b[i]]++;
        mp[a[i]]++;
	}
	mp[a[b.size()-1]]--;
	mp[a[0]]++;
	for(int i = 0;i<=a.size()-b.size();i++)
	{
        mp[a[i]]--;
		mp[a[i+b.size()-1]]++;
		if(mp[a[i]] ==0)
		mp.erase(a[i]);
	    if(mp1 == mp)
		{
			int j,k;
			for(j = 0,k = i;j<b.size();j++,k++)
			{
				if(a[k]!=b[j])
				break;
			}
			if(j==b.size())
			cout<<i<<" ";
			
		}
	}

}
int main()
{
	string a;cin>>a;
	string b;cin>>b;
	findstring(a,b);
}