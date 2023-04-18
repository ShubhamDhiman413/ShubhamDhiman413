#include<iostream>
using namespace std;

int isPrime(int a){
	for (int i =2; i<=a;i++){
		if(a%i == 0){
			return 0;
		}
	
	else{
		return 1;
	}
}
}
int main(){
	int a;
	cin>>a;
	if(isPrime(a)){
		cout<<"Given no. is a Prime No."<<endl;
	}
	else{
		cout<<"Given no. is not a Prime No."<<endl;
	}
	
	return 0;
}
