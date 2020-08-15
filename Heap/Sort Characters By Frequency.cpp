vector<int> freq(256,0);

bool comp(char &a, char &b)
{
    if(freq[a]==freq[b])
        return a<b;
    return freq[a] > freq[b];
}
class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        fill(freq.begin(), freq.end(), 0);
        
        for(int i=0;i<n;i++)
            freq[(int)(s[i])]++;
        sort(s.begin(), s.end(), comp);
        return s;
    }
};
