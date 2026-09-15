class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i = 0 ; i<nums.size() ; i++){
            st.insert(nums[i]);
        }
        int maxi = 0;
        for(auto ans : st){
            if(st.find(ans-1) == st.end()){
                int current = ans;
                int count = 1;

                while(st.find(current+1) != st.end()){
                    current++;
                    count++;
                }
                maxi = max(count , maxi);
            }
        }
        return maxi;
    }
};
