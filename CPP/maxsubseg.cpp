
#include<bits/stdc++.h>

using namespace std;
int longestSubSeg(int a[], int n, int k) 
{ 

    int cnt0 = 0; 

    int l = 0; 

    int max_len = 0; 

    // i decides current ending point
    for (int i = 0; i < n; i++) { 

        if (a[i] == 0) 

            cnt0++; 
        // If there are more 0's move 

        // left point for current ending 

        // point. 

        while (cnt0 > k) { 

            if (a[l] == 0) 

                cnt0--; 

            l++; 

        }

        max_len = max(max_len, i - l + 1); 

    } 

    return max_len; 
} 

int main()
{
    int s,k;
    cin>>s>>k;
    string t;
    cin>>t;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        arr[i]=t[i]-'0';
    }
    cout<<longestSubSeg(arr,s,k)<<endl;
}