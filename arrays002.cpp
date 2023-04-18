#include<iostream>
using namespace std;

int main(){
int i;
int *P=new int[5];
    P[0]=1; P[1]=2; P[2]=3; P[3]=4; P[4]=5;
int *q =new int [10];
for(int i=0;i<5;i++){
    cout<<P[i];
    q[i]=P[i];
    delete []P;
    P=q;
    q=NULL;
    for(int i =0;i<5;i++){
    cout<<P[i]<<endl;
}
}
 return 0;
}