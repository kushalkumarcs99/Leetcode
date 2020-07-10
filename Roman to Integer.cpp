class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        unordered_map <char, int> dictionary {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        
        int result = 0, i;
        for (i = 0; i < n; i++) {
            if (dictionary[s[i]] < dictionary[s[i+1]]) result -= dictionary[s[i]];
            else { result += dictionary[s[i]]; }
        }
        
        return result;
    }
};
