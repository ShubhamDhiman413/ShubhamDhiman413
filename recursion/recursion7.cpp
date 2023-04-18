//FACTORIAL USING RECURSION
#include<iostream>
using namespace std;
//WITH ITERATION
int fun(int a){
    if(a==0){
        return 1;
    }
    else{
       return fun(a-1)*a;
    }
}
//WITH LOOP
int fun2(int a){
    int s=1;
    int i;
    for(i=1;i<=a;i++){
        s=s*i;
    }
    return s;
}
int main(){
    int x=5;
    fun(x);
    fun2(x);
    cout<<fun(x)<<endl;
    cout<<fun2(x);
    return 0;
    }