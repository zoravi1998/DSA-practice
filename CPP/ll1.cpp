#include<bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    Node *next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insert(int x)
{
    
}

list<int> solve(list<int> ls1,list<int> ls2)
{
    list<int>::reverse_iterator itr1,itr2;
    list<int> res;
    int carry=0;
    for(itr1=ls1.rbegin(),itr2=ls2.rbegin();itr1!=ls1.rend()&&itr2!=ls2.rend();++itr1,++itr2)
    {
        //cout<<*itr1<<" "<<*itr2<<endl;
        int t=(*itr1+*itr2);
        //cout<<t<<endl;
        int x=(t+carry)%10;
        //cout<<x;
        res.push_front(x);
        carry=t/10;
    }
    return res;
}
int main()
{
    list<int> ls1,ls2;
    list<int>res;
    ls1.push_back(1);
    ls1.push_back(2);
    ls1.push_back(3);

    ls2.push_back(3);
    ls2.push_back(4);
    ls2.push_back(9);

    res=solve(ls1,ls2);

    list<int>::iterator itr;
    for(itr=res.begin();itr!=res.end();++itr)
    {
        cout<<*itr<<" ";
    }
    
}