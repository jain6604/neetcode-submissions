class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int left = 0;
        int right = n-1;
        int area = 0;
        int maxi = 0;
        while(left<right){
            if(heights[left] < heights[right]){
                area = (heights[left] * (right-left));
                left++;
            }
            else if(heights[right] < heights[left]){
                area = (heights[right] * (right-left));
                right--;
            }
            else if(heights[left] == heights[right]){
                area = (heights[left] * (right-left));
                left++;
                right--;
            }
            maxi = max(area,maxi);
        }
        return maxi;
    }
};
