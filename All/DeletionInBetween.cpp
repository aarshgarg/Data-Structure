#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};
 void display(struct node* n)
 {
     cout<<"\n\n Display the linked list"<<endl;
     while(n!=NULL)
     {
         cout<<"Element="<<n->data<<endl;
         n=n->next;
     }
 }
 struct node* DeleteInBetween(struct node* head,int index)

 {
        struct node* p=head;
        struct node* q;
        int i=0;
        while(i!=index-1)
        {
           p=p->next;
            i++;
        }
        q=p->next;
        p->next=q->next;
        cout<<"\n Display the number that is deleted"<<q->data;
        
        free(q);
        cout<<"\n\n Display the linked list"<<endl;
        return head;
 }

int main()
{
     struct node *head = new node();
    struct node *second = new node();
    struct node *third = new node();
    struct node *forth = new node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = forth;

    forth->data = 40;
    forth->next = NULL;
    display(head);
    head= DeleteInBetween(head,2);
    display(head);
    
    return 0;
}