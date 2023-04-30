#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
       int n;
       cin >> n;
       int row = 1;
       while (row <= n) {
         int space = 1;
         while (space <= n - row) {
           cout << " ";
           space++;
         }
         int val = row;
         int j = 1;
         while (j <= row) {
           cout << val;
           val++;
           j++;
         }
         cout << endl;
         row++;
       }
}


