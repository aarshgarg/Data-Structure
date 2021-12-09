#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void Display(struct node *n)
{
    cout << "\n!! Display the data!!!"<<endl;
    while (n != NULL)
    {
        cout << "Element=" << n->data << endl;
        n = n->next;
    }
}
struct node *insertatgivennode(struct node* head, struct node* prenode, int new_data)
{
    struct node *ptr = new node();
    ptr->data = new_data;
    ptr->next = prenode->next;
    prenode->next = ptr;
   // ptr->next = prenode->next;
   cout<<"\n Display the number that we add in the link list="<<new_data<<endl;
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
    head = insertatgivennode(head, second, 98);
    Display(head);
    return 0;
}