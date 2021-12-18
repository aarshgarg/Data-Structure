#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
int main()
{
    node* head=NULL;
    node* second=NULL;
    node* third=NULL;

    head=new node();
    second = new node();
    third =new node();
    head->data=20;
    head->next=second;

    second->data=30;
    second->next=third;

    third->data=40;
    third->next=NULL;
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }

}
