#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void display(struct node *n)
{
    cout << "\n\n Display the linked list \n\n";
    while (n != NULL)
    {
        cout << "\nElement=" << n->data << endl;
        n = n->next;
    }
}
// In this we can free the memory which we create the dynamically
struct node *DeleteAtEnd(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p=p->next;
        q = q->next;
    }
    p->next=NULL;
    cout<<"\n\n Display the number which we deleted="<<q->data<<endl;
       delete q;
      //  cout<<"\n\n Display the number which we deleted="<<q->data<<endl;
    cout << "\n\n Display the Linked list After the deletion";
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
    head = DeleteAtEnd(head);
    display(head);
    return 0;
}
