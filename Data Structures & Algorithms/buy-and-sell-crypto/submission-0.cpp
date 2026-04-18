class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = 0;
        for(int i : prices)
        {
            mini = min(mini,i);
            int profit = i-mini;
            maxi = max(maxi,profit);
        }
        return maxi;
        
    }
};
