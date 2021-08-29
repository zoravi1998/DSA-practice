#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){

    long i=99999;
    //cout<<i<<endl;
    string l,r;
    int sum=0;
    string s=to_string(i);
    int nd=s.length();
    long long sq=pow(i,2);
	//cout<<sq<<endl;
    s=to_string(sq);
	//cout<<s<<endl;
    int sqd=s.length();

    if(sqd==((2*nd)-1))
        r=s.substr(nd-1,sqd);
    else
        r=s.substr(nd,sqd);

    l=s.substr(0,sqd-nd);
	//cout<<l<<","<<r<<endl;
    if(l!=""&&r!="")
        sum=stoi(l)+stoi(r);

    if(sum==i)
        cout<<i<<" ";

}
