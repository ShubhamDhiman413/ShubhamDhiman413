#include<iostream>
using namespace std;
int main(){
   char a[]="finding";
   int H[26],i;
   for(i =0;a[i]!='\0';i++){
    H[a[i]-97]=+1;
   }
   for(i=0;i<26;i++){
    if(H[i]>1){
        cout<<i+97;
        cout<<a[i];
    }
   }
} 