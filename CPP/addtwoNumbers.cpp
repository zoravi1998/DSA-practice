 
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {    
public:
    int num;
    int rev(ListNode *l)
    {
        if(l==NULL)
            return num;
        
        num=rev(l->next);
        num=(num*10)+l->val;
        //cout<<num<<","<<endl;
        return num;
    }
    void disp(ListNode* l1)
    {
        ListNode *ptr;
        ptr=l1;
        while(ptr!=NULL)
        {
            cout<<ptr->val<<"->";
            ptr=ptr->next;
        }
        cout<<endl;
        int num1=rev(l1);
        cout<<num1<<endl;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode  *temp1,*temp2,*add,*ptr;
        add=new ListNode();
        temp1=l1;temp2=l2;
        int temp,d=0,c=0;
        ptr=add;
        while(temp1!=NULL||temp2!=NULL)
        {
            if(temp1!=NULL)
            {
                temp=c+temp1->val;
                c=0;
                temp1=temp1->next;
            }
            
            if(temp2!=NULL)
            {
                if(temp1!=NULL)
                temp+=temp2->val;
                else
                temp+=c+temp2->val;
                
                temp2=temp2->next;   
            }
            
            d=temp%10;
            c=temp/10;
            
            ListNode *newnode=new ListNode(d);
            ptr->next=newnode;
            ptr=ptr->next;
            
            temp=0;
        }
        if(c>0)
            ptr->next=new ListNode(c);
        
        add=add->next;
        return add;
    }
};

int main()
{
    Solution obj;
    ListNode *root=new ListNode(2);
    ListNode *ptr;
    ptr=root;
    int c=3;
    //while(c-->0)
    {
        ListNode *node = new ListNode(5);
        ptr->next=node;
        ptr=ptr->next;
        ptr->next = new ListNode(7);
        ptr=ptr->next;
        ptr->next = new ListNode(6);
        ptr=ptr->next;
        ptr->next= new ListNode(9);
        ptr=ptr->next;
        ptr->next= new ListNode(4);
        ptr=ptr->next;
        ptr->next= new ListNode(8);
        ptr=ptr->next;
        if(ptr->next==nullptr)
            cout<<root->val<<endl;
    }
    obj.disp(root);
}
    