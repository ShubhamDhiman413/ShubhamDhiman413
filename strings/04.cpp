#include<iostream>
using namespace std;
int validate (char s){
    for(int i =0;s[i]!='\0';i++){
        if(s[i]>=97&&s[i]<=122||s[i]>=65&&s[i]<=90||s[i]>=48&&s[i]<=57){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    char *s[]="AERi*u75";
        cout<<validate(s);
    return 0;
}