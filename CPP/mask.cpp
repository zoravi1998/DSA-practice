#include<bits/stdc++.h>

using namespace std;

int add(int set,int x)
{
    return set|(1<<(x-1));
}
int remove(int set,int x)
{
    return set^(1<<(x-1));
}
void display(int set)
{
    for(int i=0;i<10;i++)
    {
        if(set & (1<<i))
            cout<<i+1<<" ";
    }
    cout<<endl;
}
int main()
{
    int set=15;
    display(set);
    set=remove(set,4);
    display(set);
    set=add(set,5);
    display(set);
}