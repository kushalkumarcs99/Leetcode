class Solution {
public:
    bool isVow(const char &a){
        return a=='a' || a == 'e' || a=='i' || a == 'o' || a == 'u' || a=='A' || a == 'E' || a=='I' || a == 'O' || a == 'U';
    }
    string removeVowels(string S) {
        string res;
        for(auto x: S){
            if(!isVow(x)) res+=x;
        }
        return res;
    }
};
