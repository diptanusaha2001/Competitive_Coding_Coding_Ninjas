#include<bits/stdc++.h>
using namespace std;
int getSubsetSum(vector<int>&v,int i,int k,int n){
  
    if(i==n){
        if(k==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int count=0;
    if(k-v[i]>=0){
   count+= getSubsetSum(v,i+1,k-v[i],n);}
    
count+=getSubsetSum(v,i+1,k,n);
    return count;
    
}
int main(){
    
    // write your code here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
      cout<<getSubsetSum(v,0,k,n)<<endl;
        // cout<<count<<endl;
    }
    return 0;
}
