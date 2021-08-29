#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int sum=0;
    int max=0;
    int *vis=new int[100];
    memset(vis,0,100);
    for(int i=0;i<n;i++)
    {
        if( vis[arr[i]]!=1)
        {
            vis[arr[i]]=1;
            sum=sum+arr[i];
            cout<<sum<<endl;
            if(sum>max)
            max=sum;
        }
        else sum=0;
    }
    cout<<max<<endl;
}