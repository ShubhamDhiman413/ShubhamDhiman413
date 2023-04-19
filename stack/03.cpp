//NEXT LARGER ELEMENT TO RIGHT
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
class Solution{
    public:
   vector<long long> nextLargerElement(vector<long long>arr, int n){
    vector<long long>v;
    stack<long long>s;
    for(int i=n-1;i>=0;i--){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i]){
           while(s.size()>0&& s.top()<=arr[i]){
            s.pop();
           }
           if(s.size()==0){
            v.push_back(-1);
           }
           else
           {
            v.push_back(s.top());
           }          
        }
        s.push(arr[i]);
         }    
    reverse(v.begin(),v.end()); 
    return v;  
    }
  
};
   int main()
{
    vector<long long> arr = { 3, 8, 4, 1, 2, 6, 7, 2 };
    int n = arr.size();
    Solution sol;
    vector<long long> result = sol.nextLargerElement(arr, n);
    cout << "For the input array [3, 8, 4, 1, 2, 6, 7, 2], "
            "the next greater elements are: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}