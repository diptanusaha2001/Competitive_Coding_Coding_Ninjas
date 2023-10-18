#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nextGreaterElement(vector<int> input) {
    int n = input.size();
    vector<int> result(n, -1);
    stack<int> st;
    
    for (int i = 0; i < n; i++) {
        while (!st.empty() && input[i] > input[st.top()]) {
            result[st.top()] = input[i];
            st.pop();
        }
        st.push(i);
    }
    
    return result;
}
