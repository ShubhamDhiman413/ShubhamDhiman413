//POWER FUNCTION
#include<iostream>
using namespace std;
//1ST WAY
int fun(int s,int n){
    if (n==0){
        return 1;
    }
    else{
        return fun (s,(n-1))*s;
    }

}
//2ND WAY;
int pow(int m,int n){
  if(n==0){
    return 1;
  }
  if(n%2==0){
    return pow(m*m,n/2);
  }
  else{
    return m*pow(m*m,(n-1)/2);
  }
  
}
int main(){
    int x =2;
    int y=11;
    fun(x,y);
    pow(x,y);
    cout<<fun(x,y)<<endl;
    cout<<pow(x,y)<<endl;
    return 0;
}