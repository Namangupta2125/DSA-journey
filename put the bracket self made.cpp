#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void putbracket(int n,string s ="",int left =0,bool flag =false)
{
	if(count(s.begin(),s.end(),'(')==n)
	flag = true;
	if(n*2 == s.size())
	{
		cout<<s<<endl;
		return ;
	}
	if(left ==0&& flag ==false)
	{
		s+='(';
		putbracket(n,s,left+1,flag);
	}
	else if(left ==n)
	{   flag =true;
		s+=')';
	   putbracket(n,s,left-1,flag);}
	else
	{
		if(flag == true)
		{
			s+=')';
		   putbracket(n,s,left-1,flag);
		}
		else
		{string k = s+'(';
		putbracket(n,k,left+1,flag);
		s+=')';
		putbracket(n,s,left-1,flag);
		}
	}
}
int main()
{
	putbracket(3);
}

