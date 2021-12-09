#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
 void Display(struct node* n)
 {
     cout<<"\n\n Display linked list\n\n"<<endl;
     while(n!=NULL)
     {
        cout<< n->data<<endl;
            n=n->next;
         
     }
 }
 struct node* insertAtBetween(struct node* head,int new_data, int index)
 {
        struct node* ptr= new node();
        // we can traverse the p from the head because we can traverse the linked list from starting
        struct node* p= head;
        int i=0;
        cout<<"\n\n Insertion in Between\n\n"<<endl;
        while(i!=index-1)
        {
            p=p->next;
            i++;
        }
        ptr->data=new_data;
        ptr->next=p->next;
        p->next=ptr;
        cout<<"\nPrint the number which is insert "<<new_data<<endl;
        return head;
 }

int main()
{
    struct node* head= new node();
   struct node* second= new node();
    struct node* third= new node();
    struct node* forth= new node();

 head->data=10;
 head->next=second;

 second->data=20;
 second->next=third;

 third->data=30;
 third->next=forth;

 forth->data= 40;
 forth->next=NULL;
  
  Display(head);
  head= insertAtBetween(head,45,3);
  Display(head);
  return 0;

 
}