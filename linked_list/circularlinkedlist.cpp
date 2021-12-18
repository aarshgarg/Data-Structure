#include<iostream>
using namespace std;
 struct node
 {
     int data;
     struct node* next;
 };
 void display(struct node* head)
 {
     struct node* n=head;
     do{
     cout<<"\n\n Element="<<n->data;
     n=n->next;
     }
    // cout<<"\n\n Display the linked lsit "<<endl;
    while(n!=head);
    
}
    
 
 int main()
 {
      struct node* head = new node();
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
    forth->next = head;
    display(head);
    return 0;
 }