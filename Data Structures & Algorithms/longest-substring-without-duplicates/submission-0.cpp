class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int left = 0;
        int right = 0;
        int maxi = 0;

        while(right <s.size()){
            if(st.find(s[right]) == st.end()){
                st.insert(s[right]);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }
            maxi = max(maxi , right - left);
        }
        return maxi;
    }
};
