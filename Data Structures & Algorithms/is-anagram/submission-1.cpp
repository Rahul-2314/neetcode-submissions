class Solution {
public:
    bool isAnagram(string s, string t) {
        // base case
        if(s.length() != t.length()) return false;
        
        unordered_map<char, int> freq;

        // store frequency
        for(char ch : s) freq[ch]++;

        // check valid
        for(char ch : t) {
            freq[ch]--;
            if(freq[ch] < 0) return false;
        }

        return true;
    }
};
