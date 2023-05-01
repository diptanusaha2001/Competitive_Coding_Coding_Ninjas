public class Solution{	
	
	public static int findUnique(int[] arr){
        int i,j,c;
        for(i=0;i<arr.length;i++){
            c=0;
            for(j=0;j<arr.length;j++){
                if(arr[i]==arr[j])
                    c++;
            }
            if(c==1)
            {
                return arr[i];
            }
        }
        return 0;
		/* Your class should be named Solution
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Return output and don't print it.
	 	 * Taking input and printing output is handled automatically.
		*/
		
	}
}
