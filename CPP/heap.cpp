#include <bits/stdc++.h>
using namespace std;
class minheap
{
private:
    int *arr;
    int size, capacity;

public:
    void buildheap();
    minheap(int c){
        arr = new int[c];
        capacity = c;
        size = 0;
    }
    int left(int i){
        return 2 * i + 1;
    }
    int right(int i){
        return 2 * i + 2;
    }
    int parent(int i){
        return floor((i - 1) / 2.0);
    }

    void insert(int a){
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = a;
        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void minheapify(int i){
        int lt=left(i),rt=right(i),smallest=i;
        if(lt<size && arr[lt]<arr[i])
        {
            swap(arr[i],arr[lt]);
            smallest=lt;
        }
        if(rt<size && arr[rt]<arr[i]){
            swap(arr[i],arr[rt]);
            smallest=rt;
        }
        if(smallest!=i){
            swap(arr[i],arr[smallest]);
            minheapify(smallest);
        }
    }
    int extractmin(){
        if(size==0)
        return INT_MAX;
        if(size==1)
        return arr[0];
        swap(arr[0],arr[size-1]);
        size--;
        minheapify(0);
        return arr[size];
    }
    void decreasekey(int i,int x){
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void deletekey(int i){
        decreasekey(i,INT_MIN);
        extractmin();
    }
    
    };
    void minheap::buildheap(){
        for(int i=(size-2)/2;i>=0;i--)
        {
            minheapify(i);
        }
    }
    int main()
    {
        vector<int> arr;
    }