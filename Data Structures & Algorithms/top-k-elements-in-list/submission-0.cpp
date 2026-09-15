class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;
        sort(nums.begin() , nums.end());

        for(auto num : nums){
            freq[num]++;
        }

        priority_queue<pair<int,int>>pq;

        for(auto &p : freq){
            pq.push({p.second , p.first});
        }
        vector<int>ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
       
       
    }
};
