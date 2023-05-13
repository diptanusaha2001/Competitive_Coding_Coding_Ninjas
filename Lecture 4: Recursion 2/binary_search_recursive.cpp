int binarySearch(int input[], int size, int element,int start=0) 
{
    int mid=(start+size)/2;
    if(start>size)
    {
        return -1;
    }
    else
    {
        if(input[mid]==element)
        {
            return mid;
        }
        else if(input[mid]<element)
        {
            start=mid+1;
            return binarySearch(input,size,element,start);
        }
        else if(input[mid]>element)
        {
            size=mid-1;
            return binarySearch(input,size,element,start);
        }
    }
} 
