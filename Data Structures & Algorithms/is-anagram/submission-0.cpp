class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq1(26,0);
        vector<int> freq2(26,0);

        for(char c: s){
            freq1[c-'a']++;
        }
        for(char v : t){
            freq2[v-'a']++;
        }
        if(freq1 == freq2){
        return true;
        }
        return false;
    }
};
