#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct node
{
    int data;
    node *next;
}
*first=NULL,*last=NULL;

void display(node *p)
{
    if(first==NULL)
    {
        cout<<"LL is empty\n";
    }
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void Rdisplay(node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        Rdisplay(p->next);
    }
}
void insertatlast(int val)
{
    node *n =new node;
    n->data=val;
    n->next=NULL;
    if(first==NULL)
    {
        first=last=n;
    }
    else
    {
        last->next=n;
        last=n;
    }
    
}
void insertatposition(int pos,int val)
{
    node *t=new node;
    if(pos==0)
    {
        t->data=val;
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        node *p=first;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        if(p)
        {
            node *t=new node;
            t->data=val;
            t->next =p->next;
            p->next=t;
        }
    }
    
}
void insertSortedLL(node *p,int x)
{
    node *t=new node,*q=NULL;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
    }
    else
    {
        while (p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
        
        
    }
    
}
int deleteLL(node *p,int pos)
{
    int x=-1;
    node *q=NULL;
    if(pos==1)
    {
        first=first->next;
        x=p->data;
        free(p);
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
        q->next=p->next;
        x=p->data;
        free(p);
        }
    }
    return x;
    
}
void removedupinsortedLL(node *p)
{
    node *q = p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
        
    }
}
void reversell(node *p)
{
    node *q=NULL;
    node *r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next =r;
    }
    first=q;

}
void recursivereverse(node *q,node *p)
{
    if(p)
    {
        recursivereverse(p,p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
    
}
int isloop(node* first)
{
    node *p,*q;
    p=q=first;
    do
    {
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:NULL;
    }
    while(p&&q && p!=q);
    return (p==q) ?true:false;
}

int main()
{
    display(first);
    /*insertatlast(20);
    insertatlast(30);
    insertatlast(5);
    display(first);
    insertatposition(0,5);
    display(first);
    insertatposition(2,35);
    display(first);*/
    insertSortedLL(first,10);
    insertSortedLL(first,20);
    insertSortedLL(first,15);
    Rdisplay(first);
    cout<<"\nElement deleted is : "<<deleteLL(first,1);
    cout<<"\nElement deleted is : "<<deleteLL(first,2)<<endl;
    display(first);
    insertSortedLL(first,10);
    insertSortedLL(first,10);
    insertSortedLL(first,20);
    insertSortedLL(first,20);
    insertSortedLL(first,30);
    removedupinsortedLL(first);
    display(first);
    insertatlast(20);
    insertatlast(30);
    insertatlast(40);
    insertatlast(50);
    insertatlast(60);
    display(first);
    //reversell(first);
    recursivereverse(NULL,first);
    display(first);


    return 0;
}