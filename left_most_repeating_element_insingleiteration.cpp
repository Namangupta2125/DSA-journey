#include<bits/stdc++.h>
using namespace std;
#define ll long long

int leftmostrepeating(string b)
{
	vector<int>a(257,20000);
	for(int i = b.size()-1;i>=0;i--)
	{
		if(a[b[i]] == 10000)
		a[b[i]] = i;
	    else
		a[b[i]] = 10000;
	}
	// for(int i = 0;i<257;i++)
	// cout<<a[i]<<" ";
    // cout<<endl;
	return *min_element(a.begin(),a.end());

}
int main()
{
	string b;cin>>b;
	cout<<leftmostrepeating(b);
}