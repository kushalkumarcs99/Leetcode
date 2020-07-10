class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string, int> Map;
        
        vector<string> result;
        
        for(auto name : names) {
            string val = name; int i = Map[val];
            
            while(Map[val] > 0) {
                val = name + "(" + to_string(i++) + ")";
                Map[name] = i;
            }
            
            Map[val]++;
            result.push_back(val);
        }
        
        return result;
    }
};
