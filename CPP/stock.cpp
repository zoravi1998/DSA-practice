#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="";
    cin>>str;
    vector<int> v;
    stringstream ss(str);

    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        v.push_back(stoi(substr));
    }
    for( auto i : v)
    {
        cout<<i<<"\n";
    }
}