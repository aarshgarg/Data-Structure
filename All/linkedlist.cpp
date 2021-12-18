#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
// in this we make the user defined data type 
// 
};
we can declare  the n pointer of class node dataype 
 void linklist(node* n)
 {
     while(n!=NULL)
     {
         cout<<n->data<<endl;
         n=n->next;

     }
     
 }
int main()
{

//intialization of the node
 node * head= NULL;
 node * second= NULL;
 node * third=NULL;

 head= new node();
 second = new node();
 third = new node();
 head->data=1;
 head->next=second;

second->data=3;
second->next=third;
third->data=4;
third->next=NULL;
 linklist(head);
return 0;
}
