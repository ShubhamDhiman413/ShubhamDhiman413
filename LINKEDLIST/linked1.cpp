//COUNT NODES IN A LINKED LIST
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
 int count(struct Node*p){
  int q=0;
  while(p!=0){
    q++;
    p=p->next;
  }
  return q;
 }
 int count1(struct Node*p){
   if(p)
   return count1(p->next)+1;
 else 
 return 0;
}
int main()
{
 int A[]={3,5,7,10,25,8,32,2,9,5};
 create(A,10);
 cout<<"Length is:"<<count(first)<<endl;
 cout<<"Length is:"<<count1(first)<<endl;
 return 0;
}