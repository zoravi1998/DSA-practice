#include<iostream>

using namespace std;
void bsort(int *wt,int *val,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(wt[j]>wt[j+1])
            {
                int temp=wt[j];
                int temp1=val[j];
                wt[j]=wt[j+1];
                val[j]=val[j+1];
                wt[j+1]=temp;
                val[j+1]=temp1;
            }
        }
    }
}

int main()
{
    int wt[]={2,3,4,5};
    int val[]={1,2,5,6};
    int n=4;
    bsort(wt,val,n);
    for(int i=0;i<n;i++)
    {
        cout<<wt[i]<<",";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<val[i]<<",";
    }
}