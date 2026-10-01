class Solution {
public:

    long long calculatehours(vector<int>& piles , int k){
        long long hours = 0;

        for(auto bananas : piles){
            hours += (bananas +k -1)/k;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high =*max_element(piles.begin() , piles.end());

        while(low <= high){
            int mid = low + (high - low)/2;
            long long hour = calculatehours(piles , mid);

            if(hour <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
