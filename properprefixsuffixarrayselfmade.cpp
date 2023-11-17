#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	string s;cin>>s;
	vector<int>a(s.size(),0);
	unordered_map<char,int>mp;
	mp[s[0]]++;
	int count =0;
	for(int i =1;i<s.size();i++)
	{
        if(mp.find(s[i]) !=mp.end()){
			count++;

		}
		else
		{count =0;mp[s[i]]++;}
	    a[i] = count;
	}
	for(int i = 0;i<s.size();i++)
	cout<<a[i]<<" ";
cout<<endl;
}