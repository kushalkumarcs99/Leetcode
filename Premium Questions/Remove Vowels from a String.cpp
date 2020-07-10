class Solution {
public:
    bool isFun(const char &a){
        return a=='a' || a == 'e' || a=='i' || a == 'o' || a == 'u' || a=='A' || a == 'E' || a=='I' || a == 'O' || a == 'U';
    }
    string removeVowels(string S) {
        string result;
        for(auto x: S){
            if(!isFun(x)) result+=x;
        }
        return result;
    }
};
