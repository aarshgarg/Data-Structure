#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

    void Display(struct node* n)
    {
        cout<<"\n\n Display the linkedlist \n\n"<<endl;
        while(n!=NULL)
        {
        cout<< n->data<<endl;
        n=n->next;
        }
    }
    struct node* insertAtend(struct node* head,int new_data)
    {
        struct node* ptr= new node();
        struct node* p= head;
        cout<<"\n Insert At the end ";
        while(p->next!=NULL)

        {
            p=p->next;
        }
        ptr->data=new_data;
        
        p->next=ptr;
        ptr->next=NULL;
        cout<<"\n\n print the element insert at end ="<<new_data<<endl;
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
    Display(head);
    head= insertAtend(head,77);
    Display(head);
    return 0;

}