#include<iostream>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    map<int,int>m;
    for(int i=0; i<arr.size();i++){
        m[arr[i]]++;
    }
        for(auto:m){
            if(i.second==2){
                ans.push_back(i.first);
            }
    }
    return ans;
}
int main(){
int n;
int arr[]={};
for(int i =0 ;i<=n;i++){
	cin>>n;
}
 findDuplicate(arr,n);
 cout<<ans;

}

