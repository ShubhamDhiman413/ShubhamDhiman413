#include<iostream>
using namespace std;

void reverse(int arr[] , int n ){
	int start =0;
	int end = n-1;
	while(start<end){
		swap(arr[start] , arr[end]);
		start++;
		end--;
	}
}

void printArray(int arr[] ,int n) {
	for(int i = 0; i<n ;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[8]={1,2,3,4,5,6,7,8};
	int brr[7]={4,5,7,5,3,2,9};
	
	reverse(arr ,8);
	reverse(brr ,7);
	
	printArray(arr,8);
	printArray(brr,7);
	
	return 0;
}

