void printSubsetsOfArray(int input[], int size,string output="") {
	// Write your code here
    if(size==0)
    {
        cout<<output<<endl;
    }
    else
    {
        printSubsetsOfArray(input+1,size-1,output);
        printSubsetsOfArray(input+1,size-1,output+to_string(input[0])+" ");
    }
}
