#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char ch){
        return ch=='A'||ch=='a'||ch=='E'||ch=='e'
            ||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u';
    }

    string reverseVowels(string s) {
        int l = 0 , r = s.size() - 1;

        while(l < r){
            if(isVowel(s[l]) && isVowel(s[r])){
                swap(s[l], s[r]);
                l++, r--;
            } 
            else if(isVowel(s[l]) && !isVowel(s[r])){
                r--;
            }
            else{
                l++;
            }
        }

        return s;
    }
};

// Example test
int main() {
    Solution sol;
    string s = "IceCreAm";
    cout << sol.reverseVowels(s) << endl; // Output: AceCreIm
    return 0;
}