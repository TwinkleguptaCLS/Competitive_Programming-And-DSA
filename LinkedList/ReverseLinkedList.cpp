#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    } 
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    } 
};

class Singlylinkedlist
{
    public:
        Node * head;
        Singlylinkedlist()
        {
            this->head =nullptr;
        }
        void insertatlast(int data)
        {
            Node* newnode =new Node(data);
            if(head==NULL)
            {
                head=newnode;
            }
            else
            {
                Node *p=head;
                while(p->next!=NULL)
                {
                    p=p->next;
                }
                p->next=newnode;
            }


        }
        void reverseIter()
        {
            Node* curr =head;
            Node *prev =NULL,*next=NULL;
            while(curr!=NULL)
            {
                next=curr->next;
                //reverse curr pointer
                curr->next=prev;
                //move pointers one position forward
                prev=curr;
                curr=next;
            }
            head=prev;
        }
        Node* reverserecur(Node *curr)
        {
            if(curr==NULL || curr->next==NULL)
            {
                return curr;
            }
            Node* head = reverserecur(curr->next);
            curr->next->next=curr;
            curr->next=NULL;

            return head;
            
        }

        void printlist()
        {
            if(head==NULL)
                cout<<"Linked list is empty"<<endl;
            Node *p=head;
            while(p!=NULL)
            {
                cout<<p->data<<"->";
                p=p->next;
            }
            cout<<"\n";
        }
};

int main()
{
    Singlylinkedlist sll;
    for(int i=5;i>0;i--)
    {
        sll.insertatlast(i);
    }
    sll.printlist();
    sll.reverseIter();
   // sll.printlist();
    sll.reverserecur(sll.head);
    sll.printlist();
    return 0;
}
    
