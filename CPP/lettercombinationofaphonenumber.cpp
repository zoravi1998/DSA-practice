#include<bits/stdc++.h>

using namespace std;

class Solution {
    
private:
    vector<vector<char>>keypad;
    vector<string> result;    
public:
    Solution()
    {
        keypad={{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},
                                    {'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},
                                    {'w','x','y','z'}};
    }
    void find(int i,int n,string digits,string res)
    {
        if(i==n)
        {
            result.push_back(res);
            return;
        }
        int d=digits[i]-'0';
        for(int j=0;j<keypad[d].size();j++)
        {
            res=res + keypad[d][j];
            //cout<<res<<endl;
            find(i+1,n,digits,res);
            res.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.length();
        //cout<<n<<endl;
        find(0,n,digits,"");
        return result;
    }
};

int main()
{
    string d;
    cin>>d;
    cout<<d<<endl;
    Solution ob;
    vector<string> res;
    res=ob.letterCombinations(d);
    for(auto x:res)
    {
        cout<<x<<",";
    }
}