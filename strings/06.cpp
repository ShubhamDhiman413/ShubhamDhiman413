#include<iostream>
using namespace std;
int main(){
        /*
char a[]="painter";
char b[]="paint";
int i,j;
for(i=0;a[i]!='\0';i++){
    for(j=0;b[j]!='\0';j++)
    if(a[i]!=b[j]);
        break;
}
    if(a[i]==b[j]){
    cout<<"equal";
    }
    else if(a[i]<b[j]){
        cout<<"lesser";
    }
    else
        cout<<"greater";
}
*/
 int i,j;
    char a[]="nitin";
    char b[7];
    char temp;
    for( j=0;a[j]!='\0';j++){
    }
    j=j-1;
    for(i=0;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    if(a[i]==a[j]){
        cout<< 1;
    } 
    else{
        cout<<0;
    }
}