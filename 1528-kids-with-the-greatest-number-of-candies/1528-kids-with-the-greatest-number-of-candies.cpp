class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(), false);
        int max_a = *max_element(candies.begin(), candies.end());
        for(int i =0; i<candies.size();i++){
            if(candies.at(i) + extraCandies >= max_a){
                result.at(i)=true;
            }
        }
        return result;

        
    }
};