int countDigits(int n){
    //write your code here
    if(n==0){
        return 0;
    }
    else
        return 1 + countDigits(n/10);
}
