#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{7,10,13,14};
    int count = 0;
    int flag = v[0]%2;
    int max1 = -2000;
    for(int i = 0;i<v.size();i++)
    {
        if(v[i]%2!=flag )
        {
            max1 = max(max1,count);
            if(i == v.size()-1)
            break;
            flag = v[i]%2;
            i--;
            
            count=0;
        }
        else
        {
            count++;
            if(flag ==1)
            flag =0;
            else
            flag = 1;
            if(i == v.size()-1)
            {
                max1 = max(max1,count);
                break;
            }
        }
    }
    cout<<max1<<endl;
    return 0;
}