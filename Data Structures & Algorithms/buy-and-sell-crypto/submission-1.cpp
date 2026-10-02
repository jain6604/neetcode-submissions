class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miniprofit = INT_MAX;
        int maxprofit = 0;

        for(int price : prices){
            if(price <miniprofit){
                miniprofit = price;
            }

            if(price - miniprofit > maxprofit){
                maxprofit = price - miniprofit;
            }
        }
        return maxprofit;
    }
};
