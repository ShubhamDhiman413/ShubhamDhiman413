#include<iostream>
using namespace std;

int sumArr(int num[] ,int n){
	int sum=0;
	for(int i=0 ;i<n;i++){
		sum+=num[i];
		cout<<sum;
	}
	return sum;
}


int main(){
	int size;
	cin>>size;
	int num1[5];
	for(int i=0 ;i<size ;i++){
		cin>>num1[i];
	}
	cout<<sumArr<<endl;
	
}
