#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int mini = INT_MAX;  // Initialize with a high value
    bool has_zero = false;
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] == 0) {
            has_zero = true;
        }
        mini = min(mini, abs(nums[i]));  // Finding the minimum absolute value
    }
    
    if (has_zero) {
        cout << 0 << endl;  // If there is a zero, no operations needed
    } else {
        cout << mini << endl;  // Otherwise, output minimum absolute value
    }

    return 0;
}
