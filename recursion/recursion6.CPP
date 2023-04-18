//SUM OF N NATURAL NO. USING RECURSION
#include<iostream>
using namespace std;

//USING ITERATIVE
int fun(int s){
    if(s==0){
        return 0;
    }
    else{
        return fun(s-1)+s;
    }
}
//USING LOOPS
int fun2(int s){
    int i;
    int d=0;
    for(i=1;i<=s;i++){
        if(i==0){
            return 0;
        }
        else{
        d=d+i;
        }
    }
    return d;
}

int main(){
    int x=5;
    fun(x);
    fun2(x);
    cout<<fun(x)<<endl;
    cout<<fun2(x);
    return 0;
}