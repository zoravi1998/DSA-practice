#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        arr2[i]=arr[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=arr1[i];
        k++;i++;
    }

    while(j<n2)
    {
        arr[k]=arr2[j];
        k++;
        j++;
    }
}
void mergersort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergersort(arr,l,m);
        mergersort(arr,m+1,r);

        merge(arr,l,m,r);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cout<<"Enter array size\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergersort(arr,0,n-1);
    display(arr,n);
}