 int balancedBTs(int n) {
   long long  int *x=new long long int [n+1];
    x[1]=1;
    x[2]=3;
    for(int i=3;i<n+1;i++){
         x[i]=(((((2*x[i-1])%1000000007)*(x[i-2]%1000000007))%1000000007)+((x[i-1]%1000000007)*(x[i-1]%1000000007))%1000000007)%1000000007;
    }
    return x[n];
    // Write your code here
}
