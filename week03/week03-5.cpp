class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 =s+s;
        int n=s2.length();
        return s2.substr(1,n-2).find(s) != string::npos;
    }
};