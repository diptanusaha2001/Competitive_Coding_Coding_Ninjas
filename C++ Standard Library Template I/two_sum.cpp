#include <iostream>
#include <unordered_map>
#include <vector>
#include <utility>

using namespace std;

vector<pair<int, int>> twoSum(vector<int>& arr, int target, int n) {
    unordered_map<int, int> numCount;
    vector<pair<int, int>> pairs;
    
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        
        if (numCount.count(complement) && numCount[complement] > 0) {
            pairs.push_back(make_pair(complement, arr[i]));
            numCount[complement]--;
         //   numCount[arr[i]]--;
        }
        else {
            numCount[arr[i]]++;
        }
    }
    if(pairs.size()==0)
    pairs.push_back({-1,-1});
    return pairs;
}


