class Solution {

public:
    string addBinary(string a, string b) {
        int m = a.size(), n = b.size();
        int maxLen = max(m, n);
        string result = "";
        int carry = 0;
        
        
        for (int i = 0; i < maxLen; ++i) {
            int bitA = (i < m) ? a[m - 1 - i] - '0' : 0;
            int bitB = (i < n) ? b[n - 1 - i] - '0' : 0;
            
            int sum = bitA + bitB + carry;
            result += (sum % 2) + '0'; 
            carry = sum / 2;  
        }
        
        if (carry) {
            result += '1';
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
