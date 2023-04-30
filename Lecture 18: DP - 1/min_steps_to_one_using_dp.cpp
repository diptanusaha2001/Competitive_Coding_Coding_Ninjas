int countStepsToOne(int n)
{
	//Write your code here
    int* arr=new int[n+1];
    arr[0]=0;
    arr[1]=0;
    
    for(int i=2;i<n+1;i++){
        int a=INT_MAX, b=INT_MAX, c=INT_MAX;
        if(i%3==0)
            a=arr[i/3];
        if(i%2==0)
            b=arr[i/2];
        c=arr[i-1];
        arr[i]=1+min(a, min(b, c));
    }
    int ans=arr[n];
}
