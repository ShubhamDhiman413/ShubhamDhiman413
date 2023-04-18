//STATIC AND GLOBAL VARIABLE DECLARATION

#include<iostream>
using namespace std;
//GLOBAL VARIABLE
int x=0;
int fun(int n){
    if(n>0){
        x++;
        return fun(n-1)+x;

    }
    return 0;
}
// STATIC VARIABLE

int fun2(int n){
    static int x=0;
      if(n>0){
        x++;
        return fun2(n-1)+x;
    }
    return 0;
} 

int main(){
   int x =5;
   cout<<fun(x)<<endl;
   cout<<fun2(x);
}