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
        void insert(int pos,int data)
        {
            Node * newnode = new Node(data);
            Node *p =head;
            if(pos==0)
            {
            if(head==nullptr)
            {
                head=newnode;
            }
            else
            {
                newnode->next = head;
                head=newnode;
            }
            }
            else if(pos>0)
            {
                for(int i=0;i<pos-1;i++)
                {
                    p=p->next;
                }
                newnode->next=p->next;
                p->next=newnode;

            }
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
        void insertSortedLL(int x)
        {
            Node* p=head;
            Node*q =NULL;
            Node* newnode = new Node(x);
            if(head==NULL)
            {
                head = newnode;
            }
            while(p!=NULL && p->data<x)
            {
                q=p;
                p=p->next;
            }
            if(p==head)
            {
                newnode->next=head;
                head=newnode;
            }
            else
            {
            newnode->next=q->next;
            q->next=newnode;
            }
        }
        int getsize()
        {
            Node*p=head;
            int size=0;
            while(p!=NULL)
            {
                size++;
                p=p->next;
            }
            return size;
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
    sll.insert(0,5);
    sll.insert(0,6);
    sll.insert(1,7);
    for(int i=5;i>=1;i--)
    {
        sll.insert(0,i);
    }
    sll.printlist();
    sll.insertatlast(4);
    for(int i=3;i>0;i--)
    {
        sll.insertatlast(i);
    }
    sll.printlist();
    cout<<sll.getsize();
    return 0;
}