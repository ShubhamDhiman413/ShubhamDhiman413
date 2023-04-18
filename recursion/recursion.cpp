// HEAD AND TAIL RECURSION
#include<iostream>
using namespace std;
//HEAD RECURSION
void fun1(int a){
    if(a>0){
        fun1(a-1);
        cout<<a;
    }
}
//TAIL RECURSION

void fun2(int a){
    if(a>0){
        cout<<endl;
        cout<<a;
        fun1(a-1);
    }
}

int main(){
    int b =3;
    fun1(b);
    fun2(b);
}