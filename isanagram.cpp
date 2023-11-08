#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isanagram(string a,string b)
{
	if(a.size()!=b.size())return false;
	char c[257] ={0};
	for(int i = 0;i<a.size();i++){c[a[i]]++;c[b[i]]--;}
	for(int i = 0;i<=256;i++){if(c[i]!=0)return false;}
	return true;
}
int main()
{
	string a;cin>>a;
	string b;cin>>b;
	cout<<isanagram(a,b);
}