#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int cn = n;
    int count = 1;
    int print = 0;
        int c = 0;
    
    while(n!=0)
    {
        int spaces = n-1;
        while(spaces!=0)
        {
            cout<<" ";
            spaces--;
        }
        int start = count;
        int copy = count;
        while(copy!=0)
        {
            cout<<start;
            start++;
            copy--;
        }
        if(n!=cn)
        {
        int cc = c;    
        int last = print;
            
        while(cc!=0)
        {
            cout<<last;
            last--;
            cc--;
        }
            
        }
        n--;
        print = print + 2;
        c++;
        count++;
        cout<<endl;
        
        
    }
    
}
