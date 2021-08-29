#include<bits/stdc++.h>  
using namespace std; 
    
/* lis() returns the length of the longest   
  increasing subsequence in arr[] of size n */
int lis( int input1, int input2[] )  
{  
    int lis[input1]; 
   
    lis[0] = 1;    
  
    /* Compute optimized LIS values in  
       bottom up manner */
    for (int i = 1; i < input1; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( input2[i] > input2[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
  
    // Return maximum value in lis[] 
    return *max_element(lis, lis+input1); 
} 
/* Driver program to test above function */
int main()  
{  
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<lis( arr, n )<<endl;  
  
    return 0;  
}