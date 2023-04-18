#include<iostream>
using namespace std;
 int binarysearch(int arr[],int size , int key){
 	int start =0;
 	int end = size-1;
 	int mid =(start+end)/2;
 	while(start<=end){
 		if(arr[mid] == key){
 			return mid;
		 }
		if (key>arr[mid]){
		 	start = mid+1;
		 }
		 else{
		 	end =mid-1;
		 }
		 mid=(start+end)/2;
	 }
	 return -1;
 }

int main(){

int even[6]={3,4,5,6,7,8};
int odd [5]={1,2,3,4,5};
 int evenindex = binarysearch(even,6,8);
 int oddindex = binarysearch(odd,5,3);
 cout<<evenindex<<endl; 
 cout<<oddindex<<endl;
 return 0;
}
