void replacePi(char input[]) {
    int len = 0;
    while (input[len])
        len++;
    if(len <= 1)
        return;
    replacePi(input+1);
    if(input[0]=='p' && input[1]=='i'){
        for(int i=2*len; i>=2; i--)
            input[i+2]=input[i];
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';   
    }
}
