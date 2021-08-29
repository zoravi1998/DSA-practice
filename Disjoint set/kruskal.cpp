#include<bits/stdc++.h>

using namespace std;

void showpq(priority_queue< vector<int>,vector<vector<int>>,greater<vector<int>> > gq)
{
    priority_queue< vector<int>,vector<vector<int>>,greater<vector<int>> > g = gq;
    while (!g.empty()) {
        vector<int> t=g.top();
        cout << '\t' << t[0] << '\t' << t[1] << '\t' << t[2] <<endl;
        g.pop();
    }
    cout << '\n';
}
int main(){
    priority_queue< vector<int>,vector<vector<int>>,greater<vector<int>> > gquiz;
    gquiz.push(vector<int>{9,2,3});
    gquiz.push(vector<int>{7,5,6});
    gquiz.push(vector<int>{100,4,2});
    showpq(gquiz);
    
}