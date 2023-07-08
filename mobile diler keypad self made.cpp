#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void check(string s,string v ="",int i =0,map<char,string>mp={{'2',"ABC"},{'3',"DEF"},{'4',"GHI"},{'5',"JKL"},{'6',"MNO"},{'7',"PQR"},{'8',"STU"},{'9',"WXYZ"}})
{
	if(v.size()==s.size())
	{
		cout<<v<<endl;return;
	}
	check(s,v+((mp[s[i]])[0]),i+1);
	check(s,v+((mp[s[i]])[1]),i+1);
	check(s,v+((mp[s[i]])[2]),i+1);
	if(s[i]=='9')
	check(s,v+((mp[s[i]])[3]),i+1);

}
int main()
{
	check("666");
}

