class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {};
        for(char ch : s) freq[ch-'a']++;
        for(char ch : t) freq[ch-'a']--;
        for(int index = 0 ; index < 26 ; index++){
            if(freq[index]!=0) return false;
        }
        return true;
    }
};
