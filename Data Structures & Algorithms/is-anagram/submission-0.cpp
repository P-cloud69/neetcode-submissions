class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> seen;
        for (char x : s){
            seen[x]++;
        }
        for (char y : t){
            seen[y]--;
        }
        for (auto pair : seen) {
        if (pair.second != 0)
            return false;
        }
        return true;
    }
};
