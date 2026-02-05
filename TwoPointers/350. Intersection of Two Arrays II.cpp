#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;

        // nums1 এর frequency count
        for (int x : nums1) {
            mp[x]++;
        }

        // nums2 চেক করা
        for (int x : nums2) {
            if (mp[x] > 0) {
                ans.push_back(x);
                mp[x]--;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> result = sol.intersect(nums1, nums2);

    // Output
    cout << "Intersection: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}