#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void subgenerator(string s,string v = "",int i =0)
{
    if(i == s.size())
	{
		cout<<v<<endl;
		return ;
	}

	// not include case
	subgenerator(s,v,i+1);
	// includ case
	v.push_back(s[i]);
	subgenerator(s,v,i+1);
}
int main()
{
	subgenerator("abcd");
}

