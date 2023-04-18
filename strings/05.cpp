#include<iostream>
using namespace std;
int main(){
    int i,j;
    char a[]="python";
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
    cout<<a;  
}