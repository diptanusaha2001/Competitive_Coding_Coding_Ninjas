#include<iostream>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  int ans = 1;

  //RUN A LOOP B TIMES 
  //MEANS MULTIPLY A B TIMES

  for (int i = 1; i <= b; i++) {
        ans *= a;
  }

  
  cout << ans;
}
