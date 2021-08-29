#include<bits/stdc++.h>

using namespace std;
int n,r;
int dp[100000000];
void solve(int a,int b)
{
    if(a>r)
    {
        dp[a]=a;
        return;
    }
    dp[a]=a;
    solve(b,a+b);
}
int main()
{
    memset(dp,-1,10000000);
    cout<<"Enter range :"<<endl;
    cin>>n>>r;
    solve(0,1);
    int sum=0;
    for(int i=n;i<=r;i++)
     {
         //cout<<dp[i]<<" ,"<<endl;
         if(dp[i]!=-1)
         {
            sum+=dp[i];
         }
         else
         {
             int j=i+1;
            while(dp[j]==-1)
            {
                j++;
                continue;
            }
            sum+=dp[j];      
         }   
     }
     cout<<sum<<endl;
    return 0;
}