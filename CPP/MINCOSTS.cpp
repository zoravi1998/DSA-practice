#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int calc(int n, int arr[])
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main()
{
    
    //cout<<"Sieve Build"<<endl;
    int q;
    cin >> q;
    while (q-- > 0)
        {
            int minNotes=0,n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            sort(arr, arr + n);
            int minDom = calc(n, arr);
            //cout<<"MinDom"<<minDom<<endl;
            arr[n - 1] = minDom;
            for (int i = 0; i < n; i++)
                minNotes += arr[i]/minDom;
            cout << minNotes << endl;
        }
}