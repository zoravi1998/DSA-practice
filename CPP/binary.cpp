#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>
#include <vector>

using namespace std;

int main()
{
    int a=0;
    vector<int>res1;
    string s1;
    while(cin>>a)
    {
        bitset<32> x(a);
        s1=x.to_string();
        int res=0,base=1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='1')
                res=res+base;
            base=base*2;
        }
        res1.push_back(res);
    }
    for(int i=0;i<res1.size();i++)
    {
        if(i<res1.size()-1)
        cout<<res1[i]<<",";
        else
        cout<<res1[i]<<endl;
    }
    return 0;
}