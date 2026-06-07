class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int diff = 0;
        sort(prices.begin(), prices.end());

        diff = money - (prices[0] + prices[1]);
        return diff >= 0 ? diff : money;
    }
};