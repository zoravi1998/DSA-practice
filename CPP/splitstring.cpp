#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        //System.out.println("Enter testcase : ");
        cin>>t;
        while(t-->0)
        {
            //System.out.println("Enter length");
            int flag=0;
            int l;
            cin>>l;
            //System.out.println("Enter String");
            string s;
            cin>>s;
            for(int i=0;i<l-1;i++)
            {
                if(s[i]==s[l-1])
                {
                    flag=1;break;
                }
            }
            if(flag==1)
            cout<<"YES\n";
            else
            cout<<"NO\n";
            
        }

    }