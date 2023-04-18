#include<iostream>
using namespace std;
int main(){
    char s[]="John";
    for(int i=0;s[i]!='\0';i++){
        cout<<i;
    } 
    cout<<endl;
    cout<<s<<endl;
    cin.get(s, 50);
    cout<<s<<endl;
      for(int i=0;s[i]!='\0';i++){
        cout<<i;
    } 
}