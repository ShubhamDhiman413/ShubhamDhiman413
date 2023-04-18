#include<iostream>
using namespace std;

pair<int , int> getMaxMin(int num[], int n){
	int mini = arr[0];
	int maxi = arr[0];
	for (int i= 0; i<n;i++){
		if(arr[i]<mini){
			mini = arr[i];
			
		}
	}
	return maxi;
}

int getMin(int num[], int n){
	int mini = INT_MAX;
	for (int i= 0; i<n;i++){
		mini=min(mini,num[i]);
	}
	return mini;
}

int main(){
	int size;
	cin>>size;
	int num[100];
	for (int i=0 ;i<size;i++){
		cin>>num[i];
	}
	cout<<"Maximum no. is"<<getMax(num,size)<<endl;
	cout<<"Minimum no. is"<<getMin(num,size)<<endl;
	return 0;
}
