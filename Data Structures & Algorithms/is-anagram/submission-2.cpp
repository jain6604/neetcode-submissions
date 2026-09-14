class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        for(auto a : s){
            freq1[ a-'a']++;
        }
        for(auto b : t){
            freq2[b -'a']++;
        }
        if(freq1 == freq2){
            return true;
        }
        return false;
    }
};
