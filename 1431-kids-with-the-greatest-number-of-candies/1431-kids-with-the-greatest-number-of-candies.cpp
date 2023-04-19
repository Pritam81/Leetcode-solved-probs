class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int mx = *max_element(candies.begin(), candies.end());
        for (auto nm : candies) {
            res.push_back(nm+extraCandies >= mx);
        }
        return res;
    }
};