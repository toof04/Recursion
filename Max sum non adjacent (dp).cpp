#include <bits/stdc++.h>
using namespace std;

int recur(vector<int> &memo, vector<int> &arr, int i) {
    if (i >= arr.size()) {
        return 0;
    }

    if (memo[i] != -1) {
        return memo[i];
    }

    int include = arr[i] + recur(memo, arr, i + 2); 
    int exclude = recur(memo, arr, i + 1);         

    memo[i] = max(include, exclude);

    return memo[i];
}

int main() {
    vector<int> arr = {1, 2, 0, -8, -1,3};
    vector<int> memo(arr.size(), -1);

    int maximumSum = recur(memo, arr, 0);

    cout << maximumSum;

    return 0;
}
