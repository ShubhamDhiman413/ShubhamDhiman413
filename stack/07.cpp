//STOCK SPAN PROBLEM.
 #include<iostream>
 #include<vector>
 #include<stack>
 using namespace std;
 class solution{
   public:
   vector<long long>stockspainproblem(vector<long long>arr,int n){
    vector<long long>v;
   stack<pair<int,int>>s;
    for(int i=0;i<n;i++){
        if(s.size()==0) v.push_back(-1);
        else if(s.size()>0 && s.top().first>arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>=0 && s.top().first<=arr[i]){
                s.pop();
            }
                if (s.size()==0) v.push_back(-1);
                else{
                    v.push_back(s.top().second);
                }
            }
            s.push({arr[i],i});
        }
    for(int i=0;i<v.size();i++){
        v[i]=i-v[i];
    }
    return v;
   }
 };

 int main(){
    vector<long long>arr={100,80,60,70,60,75,85};
    int n=arr.size();
    solution sol;
    vector<long long>result=sol.stockspainproblem(arr,n);
    for(int i=0;i<n;i++){
       cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
     }