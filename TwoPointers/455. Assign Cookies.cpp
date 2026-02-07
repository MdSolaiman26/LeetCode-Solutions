#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;

        while (i < s.size() && j < g.size()) {
            if (s[i] >= g[j]) {
                i++;
                j++;
            } else {
                i++;
            }
        }
        return j;
    }
};

int main() {
    int n, m;
    cin >> n;                 // number of children
    vector<int> g(n);
    for (int i = 0; i < n; i++) cin >> g[i];

    cin >> m;                 // number of cookies
    vector<int> s(m);
    for (int i = 0; i < m; i++) cin >> s[i];

    Solution sol;
    cout << sol.findContentChildren(g, s) << endl;

    return 0;
}