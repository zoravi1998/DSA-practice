#include<bits/stdc++.h>

using namespace std;

struct Node
{
    Node *next;
    int data;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
void append (Node **head,int val)
{
    Node *new_node = new Node(val);
    Node *temp=*head;
    if(*head==NULL)
    {
        *head=new_node;
        return;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    
    temp->next=new_node;
    return;
}
void print(Node *root)
{
    while(root->next!=NULL)
    {
        cout<<root->data<<"->";
        root=root->next;
    }
    cout<<root->data<<endl;
}
void remove_duplicate(Node *root)
{
    Node *ptr,*ptr1,*ptr2,*temp;
    for(ptr=root;ptr!=NULL;ptr=ptr->next)
    {
        ptr2=ptr;
        for(ptr1=ptr->next;ptr1!=NULL;ptr1=ptr1->next)
        {
            if(ptr->data==ptr1->data)
            {
                temp=ptr1;
                ptr2->next=ptr1->next;
            }
            ptr2=ptr1;
        }
    }
}
int main()
{
    Node *root=NULL;
    append(&root,4);
    append(&root,5);
    append(&root,1);
    append(&root,9);
    append(&root,4);
    cout<<"Before:"<<endl;
    print(root);
    cout<<"After:"<<endl;
    remove_duplicate(root);
    print(root);
}