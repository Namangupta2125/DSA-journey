#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool issubsequence(string a,string b)
{
	int i = 0,j = 0;
	while(i<a.size()&&j<b.size())
	{
		if(a[i] == b[j])
		{
			i++;j++;
		}
		else
		i++;
	}
	if(i == a.size()&&j==b.size())
	return true;
    return false;
}
int main()
{
	string a;cin>>a;
	string b;cin>>b;
	cout<<issubsequence(a,b);
}