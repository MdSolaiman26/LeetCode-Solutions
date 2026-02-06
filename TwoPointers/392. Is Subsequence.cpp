#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }

        return (i == s.size());
    }
};

int main() {
    Solution sol;

    string s, t;
    cin >> s >> t;   // example: abc ahbgdc

    if (sol.isSubsequence(s, t))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}