#include<bits/stdc++.h>
using namespace std;
#define ll long long

int leftmostrepeating(string b)
{
	vector<int>a(257,20000);
	int res = INT_MAX;
	for(int i = b.size()-1;i>=0;i--)
	{
		if(a[b[i]] == 10000)
		a[b[i]] = i;
	         else
		a[b[i]] = 10000;
	    res = min(res,a[b[i]]);
	}
	if(res == 10000)
	return -1;
    return res;

}
int main()
{
	string b;cin>>b;
	cout<<leftmostrepeating(b);
}
