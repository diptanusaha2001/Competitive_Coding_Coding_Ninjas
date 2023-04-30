#include <iostream>
using namespace std;
typedef long long int ll;
const ll m = 1e9 + 7;


int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int n;
      cin>>n;
      
      int *arr = new int[n + 1]{0};
      arr[0] = 1;
   
      arr[1] = 1;
      arr[2] = 2;
      for(int i = 3; i <= n; i++) {
        arr[i] = (arr[i-1]%m+arr[i-2]%m+arr[i-3]%m)%m;
      }
      
      cout<<arr[n]<<endl;
      
      delete[] arr;
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
long long int staircase(long long int n, long long int *arr=new long long int[71]()){
    /*  Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    if(arr[n]>0)
    {
        return arr[n];
    }
    long long int steps_3=staircase(n-3, arr);
    long long int steps_2=staircase(n-2, arr);
    long long int step_1=staircase(n-1, arr);
    long long int ans=step_1+steps_2+steps_3;
    arr[n-1]=step_1;
    arr[n-2]=steps_2;
    arr[n-3]=steps_3;
    arr[n]=ans;
    return ans;
}
int main(){
 	int t;cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int ans=staircase(n);
        cout<<ans<<"\n";
    }
    // write your code here
    return 0;
}*/
