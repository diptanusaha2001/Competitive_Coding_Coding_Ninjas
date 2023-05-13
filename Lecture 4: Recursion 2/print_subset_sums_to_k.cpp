void printSubsetSumToK(int input[], int size, int k,string output="") {
    // Write your code here
    if(size==0)
    {
        if(k==0)
        {
            cout<<output<<endl;
            return ;
        }
        return;
    }
    printSubsetSumToK(input+1,size-1,k,output);
    printSubsetSumToK(input+1,size-1,k-input[0],output+to_string(input[0])+" ");
}
