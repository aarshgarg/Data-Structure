#include<iostream>
using namespace std;
 
     struct node
{
    int data;
    struct node* next;

};

void Display(struct node* n)
{
    cout<<"\n\n Display the linked list"<<endl;
    while(n!=NULL)
    {
        cout<<"Element="<<n->data<<endl;;
        n=n->next;
    }
}
    struct node* DeletionAtGivenNode( struct node* head,int value)
    {
        struct node* p=head;
        struct node* q=head->next;
        while(q->data!=value&& q!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        if(q->data==value)
        {
            cout<<"\n Dispaly the deleted number"<<q->data<<endl;

            p->next=q->next;
            free(q);
            cout<<"\n\n Display the linked list after deletion"<<endl;
        }
        return head;
    }

int main()
{
    struct node* head= new node();
    struct node* second = new node();
    struct node* third = new node();
    struct node* forth= new node();

    head->data=10;
    head->next=second;

    second->data=20;
    second-> next=third;

    third->data=30;
    third->next=forth;

    forth->data=40;
    forth->next=NULL;
    Display(head);
    head=DeletionAtGivenNode(head,80);
    Display(head);
    return 0;
}