//CREATE A LINKED LIST
#include <iostream>
using namespace std;
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{

 struct Node *head,*tail;
 first=new Node;
 first->data=A[0];
 first->next=NULL;
 tail=first;
 
 int i;
 for(i=1;i<n;i++)
 {
 head=new Node;
 head->data=A[i];
 head->next=NULL;
 tail->next=head;
 tail=head;
 }
}
void Display(struct Node *p)
{
 while(p!=NULL){
cout<<p->data<<" ";
  p=p->next;
 }
 cout<<endl;
}
void RDisplay(struct Node *p)
{
 if(p!=NULL)
 {
 cout<<p->data<<" "<<endl;
 RDisplay(p->next);
 }
}
int main()
{
 struct Node *temp;
 int A[]={3,5,7,10,25,8,32,2,9,5};
 create(A,10);
 
 Display(first);
 return 0;
}