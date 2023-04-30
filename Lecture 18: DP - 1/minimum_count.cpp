int minCount(int n)
{
	//Write your code here
    int* arr=new int[n+1];
    arr[0]=0;
    arr[1]=1;
    
    for(int i=2;i<n+1;i++){
        arr[i]=INT_MAX;
        for(int j=1;i-(j*j)>=0;j++){
            arr[i]=min(arr[i], arr[i-(j*j)]);
        }
        arr[i]=arr[i]+1;
    }
    int ans=arr[n];
    return ans;
}
