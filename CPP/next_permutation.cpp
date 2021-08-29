#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> res;

template <class T>
ostream & operator << (ostream & os, vector <T> const& x) {
    os << "{ ";
    for(auto& y : x) os << y << " ";
    return os << "}";
}

void permutate(vector<int> arr)
{
    int low=-1,high=-1;
    //find which is not following descending order
    for(int i=arr.size()-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            low=i;
            break;
        }
    }
    if(low==-1)
    return;
    //swap the found element with the next greater element
    for(int i=arr.size()-1;i>low;i--)
    {
        if(arr[i]>arr[low])
        {
            high=i;
            break;
        }
    }
    cout<<low<<high<<endl;
    swap(arr[low],arr[high]);

    reverse(arr.begin()+low+1,arr.end());
    res.push_back(arr);
    permutate(arr);
    return;
}

int main()
{
    vector<int> arr{1,2,3};
    res.push_back(arr);
    permutate(arr);
    cout<<res<<endl;
    /*for(auto x:res)
    {
        for(auto y:x)
        {
            cout<<y<<",";
        }
        cout<<"\n";
    }*/
}