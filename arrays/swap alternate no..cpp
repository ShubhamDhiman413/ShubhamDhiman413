#include<iostream>
using namespace std;
 void printarray(int arr[],int n){
 	for(int i =0; i<n;i++){
 	cout<<arr[i]<<" ";
 }
 cout<<endl;
 }

void swapAlternate(int arr[],int n ){
	for (int i = 0 ;i<n;i+=2){
		if(i+1<=n){
		int	temp=arr[1];
			arr[1]=arr[0];
			arr[0]=temp;
		}
	} 
}

int main(){
	int even[8]={1,2,3,4,5,6,7,8};
	int odd[5]={1,2,3,4,5};
	
	swapAlternate(even,8);
	printarray(even,8);
	
	cout<< endl;
	
	swapAlternate(odd,5);
	printarray(odd,5);
	
}
