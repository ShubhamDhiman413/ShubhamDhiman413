//NESTED RECURSION
#include<iostream>
using namespace std;
int fun(int x){
     if(x>100){
        return (x-10);
     }
     else{
        return fun(fun(x+11));
     }
}

int main(){
    int a=95;
    fun(a);
    cout<<fun(a);
}