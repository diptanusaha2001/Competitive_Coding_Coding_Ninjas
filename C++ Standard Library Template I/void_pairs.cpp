#include <iostream>
#include <unordered_map>

using namespace std;

bool CheckSumPairs(int ar[], int n, int k, int m) {
    unordered_map<int, int> remainderCount;
    
    for (int i = 0; i < n; i++) {
        int remainder = ar[i] % k;
        int complement = (m - remainder + k) % k;
        
        if (remainderCount[complement] > 0) {
            remainderCount[complement]--;
        } else {
            remainderCount[remainder]++;
        }
    }
    
    for (auto it : remainderCount) {
        if (it.second > 0) {
            return false;
        }
    }
    
    return true;
}
