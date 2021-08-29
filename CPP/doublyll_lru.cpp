#include<bits/stdc++.h>

using namespace std;

class LRUCache
{
private:
struct Node
{
    Node *next;
    Node *prev;
    int value,key;
    Node(int x,int k)
    {
        value=x;
        key=k;
        next=NULL;
        prev=NULL;
    }
}*head,*tail;
map<int,Node*> m;
int n;

public:
    LRUCache(int cap)
    {
        this->n=cap;
        head->next=tail;
        tail->prev=head;
        head->prev=NULL;
        tail->next=NULL;
        
    }
    
    int get(int key)
    {
       int res=-1;
       Node *node=m[key];
       if(node!=NULL)
       {
           res=m[key]->value;
           remov(node);
           add(node);
           
       }
       return res;
        
    }
    
    void set(int key, int value)
    {
        Node *node=m[key];
        if(node!=NULL)
        {
            remov(node);
            node->value=value;
           add(node);
        }
        else
        {
            Node *new_node=new Node(value,key);
            if(m.size()==n)
            {
                m[tail->prev->key]=NULL;
                remov(tail->prev);
                add(new_node);
            }
            add(new_node);
            m[key]=new_node;
        }
    }
    void add(Node *node)
    {
        head->next->prev = node;
        node->next = head->next;
        head->next = node;
        node->prev = head;
    }
    void remov(Node *node)
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}