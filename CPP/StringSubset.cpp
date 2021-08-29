#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<char> insert(vector<char> st,char x){
        st.insert(st.begin(),x);
        return st;
    }
    
    int util(string s,string t,int n,vector<char>st){
        
        if(n==0)
        {
            if(t.length() != st.size())
                return 0;
            for(int i = 0;i < t.length();i++){
                if( t[i] != st[i] )
                    return 0;
            }
            return 1;
        }
        return util(s,t,n-1,st) + util(s,t,n-1,insert(st,s[n-1]));
    }
    int numDistinct(string s, string t) {
        vector<char> st;
        return util(s,t,s.length(),st);
    }
};

int main(){
    Solution ob;

    string s= " xslledayhxhadmctrliaxqpokyezcfhzaskeykchkmhpyjipxtsuljkwkovmvelvwxzwieeuqnjozrfwmzsylcwvsthnxujvrkszqwtglewkycikdaiocglwzkwovsghkhyidevhbgffoqkpabthmqihcfxxzdejletqjoxmwftlxfcxgxgvpperwbqvhxgsbbkmphyomtbjzdjhcrcsggleiczpbfjcgtpycpmrjnckslrwduqlccqmgrdhxolfjafmsrfdghnatexyanldrdpxvvgujsztuffoymrfteholgonuaqndinadtumnuhkboyzaqguwqijwxxszngextfcozpetyownmyneehdwqmtpjloztswmzzdzqhuoxrblppqvyvsqhnhryvqsqogpnlqfulurexdtovqpqkfxxnqykgscxaskmksivoazlducanrqxynxlgvwonalpsyddqmaemcrrwvrjmjjnygyebwtqxehrclwsxzylbqexnxjcgspeynlbmetlkacnnbhmaizbadynajpibepbuacggxrqavfnwpcwxbzxfymhjcslghmajrirqzjqxpgtgisfjreqrqabssobbadmtmdknmakdigjqyqcruujlwmfoagrckdwyiglviyyrekjealvvigiesnvuumxgsveadrxlpwetioxibtdjblowblqvzpbrmhupyrdophjxvhgzclidzybajuxllacyhyphssvhcffxonysahvzhzbttyeeyiefhunbokiqrpqfcoxdxvefugapeevdoakxwzykmhbdytjbhigffkmbqmqxsoaiomgmmgwapzdosorcxxhejvgajyzdmzlcntqbapbpofdjtulstuzdrffafedufqwsknumcxbschdybosxkrabyfdejgyozwillcxpcaiehlelczioskqtptzaczobvyojdlyflilvwqgyrqmjaeepydrcchfyftjighntqzoorwmimatmhydhbujebqehjprrwfkoebcxxqfktayaaeheys";
    //cin >>s>>t;
    cout<<s<<s.length()<<endl;
    //cout<< ob.numDistinct(s,t);
}