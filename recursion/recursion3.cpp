//TREE RECURSION
#include<iostream>
using namespace std;
void fun1(int r){
    if(r>0){
        cout<<r;
        fun1(r-1);
        fun1(r-1);
    }
}
int main(){
    int s =3;
    fun1(s);
}