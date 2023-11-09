#include<bits/stdc++.h>
using namespace std;
#define ll long long

int leftmostrepeating(string b)
{
	vector<int>a(257,20000);
	int res = INT_MAX;
	for(int i = b.size()-1;i>=0;i--)
	{
		if(a[b[i]]!=20000)
		{   if(a[b[i]] != 30000)
			a[b[i]]=30000;}
	    else
		a[b[i]] = i;
	}
	for(int i = 0;i<a.size();i++){
		res = min(res,a[i]);
	}
	if(res == 20000)
	return -1;
    return res;

}
int main()
{
	string b;cin>>b;
	cout<<leftmostrepeating(b);
}