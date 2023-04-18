//INDIRECT RECURSION
#include<iostream>
using namespace std;
void fun2(int d);
void fun(int s){
    if(s>0){
        cout<<s<<" ";
        fun2(s-1);
    }
}
void fun2(int d){
    if(d>1){
        cout<<d<<" ";
        fun(d/2);
    }
}

int main(){
    int x=20;
    fun(x);
}