#include<bits/stdc++.h>
using namespace std;
void permutate(int l,int r,string str)
{
    if(l==r)
    {
        cout<<str<<endl;
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(str[l],str[i]);
            permutate(l+1,r,str);
            swap(str[l],str[i]);//backtrack

        }
    }
    
}
int main()
{
    string s;
    int n;
    cout<<"Enter a string"<<endl;
    cin>>s;
    n=s.size();
    cout<<"Permutation"<<endl;
    permutate(0,n-1,s);
    return 0;
}