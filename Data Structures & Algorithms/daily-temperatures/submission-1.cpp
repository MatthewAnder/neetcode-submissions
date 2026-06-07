class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ret (n, 0);
        stack<pair<int, int>> st; // pair: {temp, index}
        int index = 0;

        for (int temperature : temperatures) {

            while (!st.empty() && temperature > st.top().first) {
                auto top = st.top();
                st.pop();
                ret[top.second] = index - top.second; 
            }
            st.push({temperature, index});

            index++;
        }

        return ret;
    }
};
