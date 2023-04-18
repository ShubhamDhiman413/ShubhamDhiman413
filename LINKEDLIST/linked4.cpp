//SEARCHING IN LINKED LIST
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n){
    struct Node *head ,*tail;
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
struct Node* search(struct Node *p,int key){
    struct Node*q;
    while(p){
        if(p->data==key){
        q->next=p->next;
        p->next=first;
        p=first;
        return p;
    }
    q=p;
    p=p->next;
}
return NULL;
}
struct Node * RSearch(struct Node *p,int key)
{
 if(p==NULL)
 return NULL;
 if(key==p->data)
 return p;
 return RSearch(p->next,key);
 
}
int main(){
    struct Node*temp;
    int A[]={3,5,8,9,3,5,7,8,1};
    create(A,9);
    temp=search(first,9);
    cout<<temp->data;
}