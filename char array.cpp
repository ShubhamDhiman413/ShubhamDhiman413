#include<iostream>
using namespace std;
void reverse (char ch [],int n){
	int s=0;
	int e = n-1;
	while(s<=e){
		swap(ch[s++],ch[e--]);
	}
	
}
int getlength(char ch[]){
	int a = 0;
	for (int i =0 ; ch[i]!='\0';i++){
		a++;
	}
	return a;
}

int main(){
	char ch[20];
	cin>>ch;
	cout<<ch<<endl;
	int len =getlength(ch);
	cout<<len<<endl;
	reverse(ch,len);
	cout<<ch;
	return 0;
}
