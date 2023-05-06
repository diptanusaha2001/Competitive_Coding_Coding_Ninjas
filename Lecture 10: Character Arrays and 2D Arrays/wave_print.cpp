// #include <iostream>
// using namespace std;

// void wavePrint(int n, int m, int arr[][1000]) {
//   for (int j = 0; j < m; j++) {
//     if (j % 2 == 0) {
//       for (int i = 0; i < n; i++) {
//         cout << arr[i][j] << " ";
//       }
//     } else {
//       for (int i = n - 1; i >= 0; i--) {
//         cout << arr[i][j] << " ";
//       }
//     }
//   }
// }


void wavePrint(int **input, int nRows, int mCols)
{
    int i=0,j;
      while(i<mCols){
        for(j=0;j<nRows;j++){
            cout<<input[j][i]<<" ";
        }
           i++;
       if(mCols-i>=1){
          for(j=nRows-1;j>=0;j--){
              cout<<input[j][i]<<" ";
          }
          i++;
       }
      }
}

