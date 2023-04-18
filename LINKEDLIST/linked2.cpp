//SUM OF ALL NODES OF A LINKED LIST
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
 int sum(struct Node *p)
{
 int s=0;
 while(p!=NULL)
 {
 s+=p->data;
 p=p->next;
 }
 return s;
}
int sum1(struct Node *p)
{
 if(p==NULL)
 return 0;
 else
 return sum1(p->next)+p->data;
}
int main()
{
 struct Node *temp;
 int A[]={3,5,7,10,25,8,32,2,9,5};
 create(A,10);
 cout<<"Sum is:"<<sum(first)<<endl;
 cout<<"Sum is:"<<sum1(first);
 return 0;
}