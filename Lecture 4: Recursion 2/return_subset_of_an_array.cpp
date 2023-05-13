int subset(int input[], int n, int output[][20]) {
    // Write your code here
	if(n==0)
	{
		output[0][0]=0;
		return 1;
	}
	else
	{
		int smallOutput=subset(input+1,n-1,output);
		int i,j;
		
		for(i=0;i<smallOutput;i++)
		{
			output[smallOutput+i][0]=output[i][0]+1;
			output[smallOutput+i][1]=input[0];
			for(j=2;j<=output[i][0]+1;j++)
				output[smallOutput+i][j]=output[i][j-1];
		}
		return 2*smallOutput;
	}
}
