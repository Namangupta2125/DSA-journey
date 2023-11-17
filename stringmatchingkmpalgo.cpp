#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<int>lfd(string s)
{
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
	return a;
}
int main()
{
	string s;cin>>s;
	string match;cin>>match;
	vector<int>a = lfd(s);
	vector<int>b = lfd(match);
	if(a.size()<b.size())
	{
		cout<<"not found"<<endl;
		return 0 ;
	}
    for(int i = match.size()-1,j=0;i<a.size();i++,j++)
	{
		if(*(b.end()-1) == a[i])
		{
			bool flag = true;
			for(int k = j;k<=i;k++)
			{
				if(s[k] != match[k]){
					flag = false;
					break;
				}
			}
			if(flag == true)
			{
				cout<<"found"<<endl;
				break;
			}
		}
		cout<<"not found\n";
	}
}