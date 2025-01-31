class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(), false);
        for(int i =0; i<candies.size();i++){
            if(candies.at(i) + extraCandies >= *max_element(candies.begin(), candies.end())){
                result.at(i)=true;
            }
        }
        return result;

        
    }
};