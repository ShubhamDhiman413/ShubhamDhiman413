//MAX. NODE IN A LINKED LIST
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node*next;
}*first=NULL;
void create(int A[],int n){
    struct Node *head,*tail;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    tail=first;
    int i;
    for(i=1;i<n;i++){
        head=new Node;
        head->data=A[i];
        head->next=NULL;
        tail->next=head;
        tail=head;
    }
}
int MAX(struct Node*p){
    int m=INT32_MIN;
    while(p){
    if(p->data>m)
    m=p->data;
    p=p->next;
    }
    return m;
}
int max(struct Node*p){
    int q=0;
    if(p==0)
    return INT32_MIN;
    q=max(p->next);
 if(q>p->data)
 return q;
 else
 return p->data;
}
int main(){
    int A[]={2,3,4,7,9,3,5,8};
    create(A,8);
    cout<<"Max. Element is:"<<MAX(first)<<endl;
    cout<<"Max. Element is:"<<max(first);
    return 0;
}